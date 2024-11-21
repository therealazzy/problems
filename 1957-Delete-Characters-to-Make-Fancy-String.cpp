class Solution {
public:
    string makeFancyString(string s) {
        string result;

        for(char c : s){
            if(result.size() < 2 || !(result[result.size() - 1] == c && result[result.size() -2] == c)) {
                result.push_back(c);
            }
        }
        return result;
    }
};