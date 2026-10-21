/*
re-solve 1
-----------
use # + size + str pattern
first read the size until #
and then took the string for size ahead
*/

class Solution {
public:
    string encode(vector<string>& strs) {
        string encoded = "";
        for(string str : strs){
            encoded += to_string(str.size()) + "#" + str;
        }

        return encoded;
    };

    vector<string> decode(string s) {
        int n = s.size();
        int i = 0;
        vector<string> ans;
        
        while(i < n){
            int pos = s.find('#', i);
            int size = stoi(s.substr(i, pos));
            ans.push_back(s.substr(pos + 1, size));

            i = pos + 1 + size;
        }

        return ans;
    }
};
