class Solution {
public:
    int missingNumber(vector<int>& n) {
        int res = n.size();
        for(int i = 0; i < n.size(); i++){
            res += i - n[i];
        }
        return res;
    }
};