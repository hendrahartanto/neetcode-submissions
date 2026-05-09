/*
solution
--------
loop every character in strings
check if current character is an open bracket or not
if it is an open bracket, push the corresponding closing bracket to the stack
if it is an closing bracket, check if the top of the stack is the same as current closing bracket
if yes, pop the top
if not, return false

if the stack is not empty at the end, return false, otherwise return true
*/

class Solution {
public:
    bool isValid(string s) {
        stack<char> st; 
        int n = s.size();
        for(int i = 0; i < n; i++){
            if(s[i] == '('){
                st.push(')');
            }else if (s[i] == '{'){
                st.push('}');
            }else if (s[i] == '['){
                st.push(']');
            }else {
                //if it is a closing bracket
                if(st.empty() || st.top() != s[i]){
                    return false;
                }

                st.pop();
            }
        }

        return st.empty();
    }
};
