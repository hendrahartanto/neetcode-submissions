/*
i saw the hint:
-----------------
monotonic stack = stack that will store value increasingly or decreasingly
for example if decreasingly, it will check the current value with the top, if the current value is bigger, pop the top, and then check the top again until the top is bigger than the current value, and then push the current value
so the value will be stored descendingly
*/

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        stack<int> st;
        vector<int> result(n, 0);

        for(int i = 0; i < n; i++){
            while(!st.empty() && temperatures[i] > temperatures[st.top()]){
                result[st.top()] = i - st.top();
                st.pop();
            }
            st.push(i);
        }

        return result;
    }
};
