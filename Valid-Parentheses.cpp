class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        if(s[0] == ')' || s[0] == '}' || s[0] == ']') return false;
        for( char c : s){
            if(c == '(' || c == '{' || c == '['){
                stack.push(c);
            } else if (c == ')' && !stack.empty() && stack.top() == '('){
                stack.pop();
            }
            else if (c == '}' && !stack.empty() && stack.top() == '{'){
                stack.pop();
            }
            else if (c == ']' && !stack.empty() && stack.top() == '['){
                stack.pop();
            } else {
                stack.push(c);
            }
        }
        return stack.empty();
    };
};