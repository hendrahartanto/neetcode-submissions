/* 
re-solve 2
-----------
use the first elements in array as the reference
outer loop run as many as first word's length
inner loop run as many as the length of the strs's array
every inner loop, compare the reference word with the remaining word
    if the current index is equal or bigger than the other word, return the result
    or if the current letter of reference is not the same as the other word, return the result
if the inner loop finishes, append the current reference letter to the ans string
*/


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        for(int i = 0; i < strs[0].size(); i++){
            for(int j = 0; j < strs.size(); j++){
                if(i >= strs[j].size() || strs[0][i] != strs[j][i]){
                    return ans;
                }
            }
            ans += strs[0][i];
        }

        return ans;
    }
};