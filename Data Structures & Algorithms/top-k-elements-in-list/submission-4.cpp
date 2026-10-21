/*
re-solve 1
-----------
use bucket sort concept (where the count act as a key and the list value of that count inside it)
we can just iterate from the last key (highest count)
the max bucket size is the length of nums

loop nums to count the occurence of each elements using hash map
loop through the hash map and append the key (value of hash map) to the bucket[key of hasmap]
*/

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int size = nums.size();
        vector<vector<int>> bucket(size + 1);
        unordered_map<int, int> count;
        vector<int> ans;

        for(int num : nums){
            count[num]++;
        }

        for(auto& [key, value] : count){
            bucket[value].push_back(key);
        }

        for(int i = size; i > 0; i--){
            for(int num : bucket[i]){
                ans.push_back(num);
                if(ans.size() == k){
                    return ans;
                }
            }
        }

        return ans;
    }
};
