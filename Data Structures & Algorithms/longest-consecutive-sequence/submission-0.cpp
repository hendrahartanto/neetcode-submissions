/*
solution find after i read the find
convert the vector into hashset (for easier num lookup O(1))
find the start sequence number (if num - 1 not exsists in set it means current num is the startSeq)
iterate all over the startSeq, and count the sequence count
get the maximum sequence number and return it
*/


class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        vector<int> startSeq;
        
        for(int num : numSet){
            if(numSet.find(num-1) == numSet.end()){
                startSeq.push_back(num);
            }
        }

        int max = 0;

        for(int num : startSeq){
            int count = 1;
            int curr = num;
            while(numSet.find(curr+1) != numSet.end()){
                count++;
                curr++;
            }
            if(count > max){
                max = count;
            }
        }

        return max;
    }
};
