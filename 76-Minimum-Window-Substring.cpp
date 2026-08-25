class Solution {
public:
    string minWindow(string s, string t) {
        //dynamic sliding window while comparing if we have enough chars in window map for 't'
        if(t == "") return "";
        unordered_map<char, int> freqT;
        unordered_map<char,int> window;
        for(char& c : t){
            freqT[c]++;
        }
        int have = 0, need = freqT.size();
        int l = 0, start = 0;
        int minL = INT_MAX;
        for(int r = 0; r < s.length(); r++){
            window[s[r]]++;
            if(freqT.count(s[r]) && window[s[r]] == freqT[s[r]]){
                have++;
            }
            while(have == need){
                if((r - l) + 1 < minL){
                    minL = (r - l) + 1;
                    start = l;
                }
                window[s[l]]--;
                if(freqT.count(s[l]) && window[s[l]] < freqT[s[l]]){
                    have--;
                }
                l++;
            }
        }
        return minL == INT_MAX ? "" : s.substr(start, minL);
    }
};