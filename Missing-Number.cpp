class Solution {
public:
    int missingNumber(vector<int>& n) {
        sort(n.begin(), n.end());
        for(int i = 0; i < n.size(); ++i){
            if(n[i] != i){
                return i;
            }
        }
        return n.size();
    }
};