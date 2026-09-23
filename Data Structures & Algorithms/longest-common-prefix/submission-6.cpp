/* 
re-solve 1
-----------
use first word as an anchor
compare 1 letter to all other word check if its not the same, return the result
if 1 cycle of loop complete without any return, put the current letter as an ans
*/


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        
        for(int i = 0; i < strs[0].size(); i++){
            for(int j = 1; j < strs.size(); j++){
                if(i >= strs[j].size() || strs[j][i] != strs[0][i]){
                    return ans;
                }
            }
            ans += strs[0][i];
        }

        return ans;
    }
};