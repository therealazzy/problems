class Solution {
public:
    vector<string> letterCasePermutation(string s) {
        vector<string> res={""};
        for( char c : s){
            vector<string> perm;
            if(isalpha(c)){
                for( string& str : res ){
                    perm.push_back(str + (char)tolower(c));
                    perm.push_back(str + (char)toupper(c));
                }
            }
            else{
                for( string& str : res){
                perm.push_back(str + c);
                }
            }
            res = perm;
        }
        

        return res;
}

};