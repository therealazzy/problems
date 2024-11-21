#include <vector>
#include <sstream>
#include <string>
class Solution {
public:
    bool isCircularSentence(string sentence) {
        istringstream stream(sentence);
        string pWord, word;

        if(!(stream >> pWord)){
            return false;
        }

        while(stream >> word) {
            if (pWord.back() != word.front()){
                return false;
            }
            pWord = word;
        }
        return pWord.back() == sentence.front();
    }
};