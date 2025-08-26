class Solution {
public:
    vector<int> twoSum(vector<int>& n, int target) {
     unordered_map<int, int> seen;
     for( int i = 0; i < n.size(); ++i){
        int second = target - n[i];
        if(seen.count(second)){
            return{seen[second], i};
        }
        seen[n[i]] = i;
     }
     return{};
    }
};