class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxx = nums[0];
        int csum = 0;
        for(int i = 0; i <nums.size(); ++i){
            if(csum < 0){
                csum = 0;
            }
            csum += nums[i];
            maxx = max(maxx, csum);
        }
        return maxx;
    }
};