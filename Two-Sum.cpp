1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        unordered_map<int, int> seen;
5        for(int i = 0 ; i < nums.size(); ++i){
6            int second = target - nums[i];
7            if(seen.count(second)) return {seen[second], i};
8            seen[nums[i]] = i;
9        }
10        return {};
11    }
12};