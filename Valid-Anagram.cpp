1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4        if(s.size() != t.size()) return false;
5        unordered_map<char, int> freq;
6        for(char& c : s){
7            freq[c]++;
8        }
9
10        for(char& c : t){
11            if(freq[c] <= 0) return false;
12            freq[c]--;
13        }
14
15        return true;
16    }
17};