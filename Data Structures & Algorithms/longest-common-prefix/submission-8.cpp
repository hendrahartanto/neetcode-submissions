/*
re-solve 3:
------------
use the first element as an anchor to compare to the rest elements
loop to compare the all of the anchor's letter to the other rest elements one by one
break and return currentResult if: current index >= other word's length || current anchor letter != other letter
if the inner loop complete without breaking / returning, append current letter to the result
*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";
        for(int i = 0; i < strs[0].size(); i++){
            for(string s : strs){
                if(i >= s.size() || strs[0][i] != s[i]){
                    return result;
                }
            }
            result += strs[0][i];
        }

        return result;
    }
};