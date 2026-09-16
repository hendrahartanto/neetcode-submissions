/*
choose first string as the benchmark
loop through all string
check if current index is at the end of current string or curret benchmark char is not the same, return the ans
add the character to ans if it passess the checking
*/


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;

        for(int i = 0; i < strs[0].size(); i++){
            for(string str : strs){
                if(i >= str.size() || str[i] != strs[0][i]){
                    return ans;
                }
            }
            ans += strs[0][i];
        }

        return ans;
    }
};