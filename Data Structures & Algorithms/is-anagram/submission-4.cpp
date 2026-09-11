/*
use hashmap <char, int>
loop every s, map the char as key and increment the value
loop every t, decrement the value by the char key
loop the hashmap check if there are key with > 0 value if yes return false
else return true
*/

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> hashMap;
        
        for(const char& c : s){
            hashMap[c]++;
        }
        
        for(const char& c : t){
            hashMap[c]--;
        }

        for(const auto& [key, value] : hashMap){
            if(value != 0){
                return false;
            }
        }

        return true;
    }
};
