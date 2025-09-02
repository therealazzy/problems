class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int res = nums[0];
        
        for(int x : nums){
            if(abs(x) < abs(res)){
                res = x;
            }
        }
        if(res < 0 && find(nums.begin(), nums.end(), abs(res)) != nums.end()){
            return abs(res);
        }



        return res;
    }
};