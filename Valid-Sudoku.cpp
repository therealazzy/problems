1class Solution {
2public:
3    bool isValidSudoku(vector<vector<char>>& board) {
4        for(int r = 0; r < 9; ++r){
5            unordered_set<char> seen;
6            for(int i = 0; i < 9; ++i){
7                if(board[r][i] == '.') continue;
8                if(seen.count(board[r][i])) return false;
9                seen.insert(board[r][i]);
10            }
11        }
12
13        for(int c = 0; c < 9; c++){
14            unordered_set<char> seen;
15            for(int i = 0; i < 9; ++i){
16                if(board[i][c] == '.') continue;
17                if(seen.count(board[i][c])) return false;
18                seen.insert(board[i][c]);
19            }
20        }
21
22        for(int sq = 0; sq < 9; ++sq){
23            unordered_set<char> seen;
24            for(int i = 0; i < 3; ++i){
25                for(int j = 0; j < 3; ++j){
26                    int row = (sq / 3) * 3 + i;
27                    int col = (sq % 3) * 3 + j;
28                    if(board[row][col] == '.') continue;
29                    if(seen.count(board[row][col])) return false;
30                    seen.insert(board[row][col]);
31                }
32            }
33        }
34        return true;
35    }
36};