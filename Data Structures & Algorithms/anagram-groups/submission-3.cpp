/*
initial solve
--------------
create nested map
use the map of letter count as the key of outer map 
and the value is vector of string
after that, loop all the map and push_back all the vector into parent vector as an answer
*/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<map<char, int>, vector<string>> nestedMap;

        for(int i = 0; i < strs.size(); i++){
            map<char, int> letterCount;
            for(char c : strs[i]){
                letterCount[c]++;
            }
            nestedMap[letterCount].push_back(strs[i]);
        }

        vector<vector<string>> ans;
        for(const auto& [key, value] : nestedMap){
            ans.push_back(value);
        }

        return ans;
    }
};
