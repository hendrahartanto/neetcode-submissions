/*
resolve 3:
------------
use bucket sort concept (count as key) (list of num as value)
size of bucket = size of nums
loop from the end of bucket for the highest occurence
*/

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> count;
        vector<vector<int>> bucket(n + 1);
        vector<int> ans;

        for(int num : nums){
            count[num]++;
        }

        for(auto& [key, value] : count){
            bucket[value].push_back(key);
        }

        for(int i = n ; i > 0; i--){
            for(int num : bucket[i]){
                ans.push_back(num);
                if(ans.size() >= k) return ans;
            }
        }

        return ans;
    }
};
