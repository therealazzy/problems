class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> seen;
        int n = nums.size();
        for(int i = 0; i < n; ++i){
            if(seen.count(nums[i])){
                return true;
            }
            seen.insert({nums[i], i});
            if(seen.size()>k){
                seen.erase(nums[i-k]);
            }
        }
        return false;
    }
};