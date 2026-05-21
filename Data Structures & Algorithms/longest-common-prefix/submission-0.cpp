/*
loop every element simultaneously from first to end
if in the current loop every element have the same character push the characterto result string
*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];
        for (int i = 1; i < strs.size(); i++) {
            int j = 0;
            while (j < min(prefix.length(), strs[i].length())) {
                if (prefix[j] != strs[i][j]) {
                    break;
                }
                j++;
            }
            prefix = prefix.substr(0, j);
        }
        return prefix;
    }
};