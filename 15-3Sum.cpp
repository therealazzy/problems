class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        //sort
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++){
            //check if i is a dupe of previous i
            if(i > 0 && nums[i] == nums[i-1]){
                continue;
            }
            //init j and k pointers
            int j = i + 1;
            int k = nums.size() -1;
            //while the pointers are valid
            while(j < k){
                //start calculating the sum and what to do if we find a valid sum
                int sum = nums[i] + nums[j] + nums[k];
                if(sum < 0 ) j++;
                else if(sum > 0) k--;
                //we have found a valid throuple
                else{
                    res.push_back({nums[i], nums[j], nums[k]});
                    //move j forward to look further
                    j++;
                    //make sure j is not a duplicate either AND while j is still less than k
                    while(nums[j] == nums[j - 1] && j < k) j++;
                }

            }
        }
        return res;
    }
};