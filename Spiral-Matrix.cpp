class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& m) {
        int top = 0;
        int bottom = m.size()-1;
        int left = 0;
        int right = m[0].size()-1;
        vector<int> res;
        while(top <= bottom && left <= right){
            //traverse right from top
            for(int i = left; i <= right; ++i){
                res.push_back(m[top][i]);
            }
            ++top;
            //down from the right side
            for(int i = top; i <= bottom; ++i){
                res.push_back(m[i][right]);
            }
            --right;
            if(top<=bottom){
            //left from the bottom
            for(int i = right; i >= left; --i){
                res.push_back(m[bottom][i]);
            }
            --bottom;
            }

            if(left<=right){
            //bottom to top
            for(int i = bottom; i >= top; --i){
                res.push_back(m[i][left]);
            }
            ++left;
            }
        }
        return res;
    }
};