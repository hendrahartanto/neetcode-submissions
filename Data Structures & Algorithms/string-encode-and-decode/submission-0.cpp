/*
solution 1:
use '\0' as a separator of each string
*/

class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded;
        for(string str : strs){
            encoded += str + '\0';
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> output;
        string temp;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '\0'){
                output.push_back(temp);
                temp.erase();
                continue;
            }
            temp += s[i];
        }
        return output;
    }
};
