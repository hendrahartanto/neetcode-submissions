/*
store the num and it count into a hash table
copy the hashtable into a vector of pair of int, int
sort the list of pair by the count or number of occurence descendingly
loop k times, to get the k-th num
*/

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> numCount;
        for(int num : nums){
            numCount[num]++;
        }

        vector<pair<int, int>> numPairList(numCount.begin(), numCount.end());
        sort(numPairList.begin(), numPairList.end(), [](const auto& a, const auto& b){
            return a.second > b.second;
        });

        vector<int> output;
        for(int i = 0; i < k; i++){
            output.push_back(numPairList[i].first);
        }

        return output;
    }
};
