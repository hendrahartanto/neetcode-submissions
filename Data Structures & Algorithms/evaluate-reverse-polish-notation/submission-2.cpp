/*
loop through the list of tokens
if current token = operands or number, push it
if current token is operator, pop top 2 operand and calculate the 2 operand with current operator
push the result to the stack
continue the operations until end
*/

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int n = tokens.size();
        
        for(const string& token : tokens) {
            if(token == "+" || token == "-" || token == "*" || token == "/") {
                int secondOperand = st.top(); 
                st.pop();
                int firstOperand = st.top(); 
                st.pop();
                
                if(token == "+") {
                    st.push(firstOperand + secondOperand);
                } else if(token == "-") {
                    st.push(firstOperand - secondOperand);
                } else if(token == "*") {
                    st.push(firstOperand * secondOperand);
                } else if(token == "/") {
                    st.push(firstOperand / secondOperand);
                }
            } else {
                st.push(stoi(token));
            }
        }

        return st.top();
    }
};
