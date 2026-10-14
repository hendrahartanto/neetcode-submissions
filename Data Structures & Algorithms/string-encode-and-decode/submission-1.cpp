/*
initial solve
-------------
i already thought of solution using length and some delimiter, but i think it can be confused with another set of character, but after i think it thoroughly if it already read the length and delimieter at start it will get all n next character and it will conitnue to scan next length and delimieter
*/

class Solution {
public:
    string encode(vector<string>& strs) {
        string encoded = "";
        for(string str : strs){
            int length = str.size();
            encoded += to_string(length) + "#" + str;
        }
        
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int startIndex = 0;
        
        while(startIndex < s.size()){
            int pos = s.find('#', startIndex);
            int length = stoi(s.substr(startIndex, pos - startIndex));

            string res = s.substr(pos + 1, length);
            startIndex = pos + 1 + length;

            result.push_back(res);
        }

        return result;
    }
};
