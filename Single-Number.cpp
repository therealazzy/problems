class Solution {
public:
    int singleNumber(vector<int>& n) {
        int ans = 0;
        for(int i = 0; i < n.size(); ++i){
            ans = ans^n[i];
        }
        return ans;
    }
};