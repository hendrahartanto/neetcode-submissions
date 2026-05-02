/*
sort both of the string
loop from the first element
check if there are different character, return false
base case: if the length of those two strings is not the same, return false
*/
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if(s.size() != t.size()){
            return false;
        }
        for(int i = 0; i < s.length(); i++){
            if(s[i] != t[i]){
                return false;
            }
        }
        return true;
    }
};
