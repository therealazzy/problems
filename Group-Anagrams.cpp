1class Solution {
2public:
3    vector<vector<string>> groupAnagrams(vector<string>& strs) {
4        vector<vector<string>> res;
5        unordered_map<string, vector<string>> group;
6
7        for(string& s : strs){
8            string sorted = s;
9            sort(sorted.begin(), sorted.end());
10            group[sorted].push_back(s);
11        }
12
13        for(auto& g : group){
14            res.push_back(g.second);
15        }
16
17        return res;
18    }
19};