1class Solution {
2public:
3    int missingNumber(vector<int>& n) {
4        int res = n.size();
5        for(int i = 0 ; i < n.size(); ++i){
6            res += i - n[i];
7        }
8        return res;
9    }
10};