#include <vector>
#include <sstream>
#include <string>
class Solution {
public:
    bool isCircularSentence(string sentence) {
        vector<string> words;
        istringstream stream(sentence);
        string word;

        while(stream >> word){
            words.push_back(word);
        }

        if(words[0].front() != words[words.size() - 1].back()){
            return false;
        }
        
        for(int i = 0; i < words.size() - 1; i++){
            if(words[i].back() != words[i + 1].front()){
                return false;
            }
        }
        return true;
    }
};