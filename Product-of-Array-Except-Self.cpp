1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) {
4        vector<int> res(nums.size());
5        int prefix = 1;
6        int postfix = 1;
7        for(int i = 0; i < nums.size(); ++i){
8            res[i] = prefix;
9            prefix *= nums[i];
10        }
11        for(int i = nums.size() -1; i >= 0; --i){
12            res[i] *= postfix;
13            postfix *= nums[i];
14        }
15        return res;
16    }
17};