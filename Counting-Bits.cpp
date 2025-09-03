class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res(n+1, 0);
        int offset = 1;
        for(int i = 1; i <= n; ++i){
            if(2 * offset == i){
                offset = i;
            }
            res[i] = 1 + res[i - offset];
        }
        return res;
    }
};