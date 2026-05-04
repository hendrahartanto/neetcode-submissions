/*
more optimal solution (bucket sort):
------------------------------------
store the num and it count into a hash table
map each of the count as a key in array and the value is the num
loop from the n-th index stepping back until the output length is equals to k
*/

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> numCountMap;
        for(int num : nums){
            numCountMap[num]++;
        }

        vector<vector<int>> numCountList(nums.size() + 1);
        for(const auto& numCount : numCountMap){
            numCountList[numCount.second].push_back(numCount.first);
        }

        vector<int> output;
        int count = 0;
        for(int i = nums.size(); i > 0; i--){
            for(int numCount : numCountList[i]){
                output.push_back(numCount);
                count++;
                if(count == k) return output;
            }
        }

        return output;
    }
};
