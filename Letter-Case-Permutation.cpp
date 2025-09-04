class Solution {
public:
    vector<string> res;

    void permutate(string cur, string s, int i){
        if(i==s.size()){
            res.push_back(cur);
            return;
        }

        if(isdigit(s[i])){
            cur.push_back(s[i]);
            permutate(cur,s,i+1);
        } else{
            string c1 = cur;
            c1.push_back(tolower(s[i]));
            permutate(c1,s,i+1);

            string c2 = cur;
            c2.push_back(toupper(s[i]));
            permutate(c2,s,i+1);
        }
    }


    vector<string> letterCasePermutation(string s) {
        res.clear();
        permutate("",s,0);
        return res;
    }
};