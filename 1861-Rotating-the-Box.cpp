class Solution {

    void dump(vector<vector<char>>& rBox, int c, int x, int y){
        while(c){
            rBox[x][y] = '#';
            x--;
            c--;
        }
    }


public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
        
        int m = box.size();
        int n = box[0].size();

        vector<vector<char>> rBox(n, vector<char>(m,'.'));

        for(int i = 0; i < m; i++){
            int c = 0;
            for(int j = 0; j < n; j++){
                if(box[i][j] == '#'){
                    c ++;
                }
                else if(box[i][j] == '*'){
                    rBox[j][m - i - 1] = '*';
                    dump(rBox, c, j - 1, m - i - 1);
                    c = 0;
                }
            }
            if(c > 0){
                dump(rBox, c, n - 1, m - i - 1);
            }
        }
                    return rBox;
    }
};