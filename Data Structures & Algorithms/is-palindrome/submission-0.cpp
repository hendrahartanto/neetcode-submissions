/*
classic problem:
remove all the whitespace and non alphanumeric character
loop it half the size of string
check the frist and last + i if it is not the same reutrn false
if the loop is complete wihtout returning false, return true
*/


class Solution {
public:
    bool isPalindrome(string s) {
        erase_if(s, [](unsigned char c) { 
            return !isalnum(c); 
        });

        int n = s.size();
        
        for(int i = 0; i < n/2; i++){
            if(tolower(s[i]) != tolower(s[n-1-i])){
                return false;
            }
        }

        return true;
    }
};
