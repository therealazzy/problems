class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        vector<vector<int>> res;
        int mdiff;
        for(int i = 1; i < arr.size(); ++i){
            mdiff= min(mdiff, arr[i]-arr[i-1]);
        }

        for(int i = 1; i < arr.size(); ++i){
            if(arr[i]-arr[i-1] == mdiff){
                res.push_back({arr[i-1], arr[i]});
            }
        }
        return res;
    }
};