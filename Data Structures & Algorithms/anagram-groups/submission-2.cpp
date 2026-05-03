/*
create a map with vector of int as the key, and list of string as the value
iterate every element in the string, sum all the character occurence into vector of int, and push current str to the map
if two strings have a vecotr int sum, it means it have same amount of character == anagram
convert the map into a list of list string
return the output
*/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>, vector<string>> strListMap;
        for(string str: strs){
            vector<int> count(26, 0);
            for(int i = 0; i < str.size(); i++){
                count[str[i] - 'a']++;
            }
            strListMap[count].push_back(str);
        }

        vector<vector<string>> output;
        for(const auto& strList : strListMap){
            output.push_back(strList.second);
        }

        return output;
    }
};
