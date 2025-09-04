class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> sol;

        createSubset(nums, 0, res, sol);
        return res;
    }

    void createSubset(vector<int>& nums, int i, vector<vector<int>>& res, vector<int>& sol){
        if(i == nums.size()){
            res.push_back(sol);
            return;
        }

        sol.push_back(nums[i]);
        createSubset(nums, i + 1, res, sol);

        sol.pop_back();
        createSubset(nums, i + 1, res, sol);
    }
};