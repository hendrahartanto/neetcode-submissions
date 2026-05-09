/*
hashmap solution from the neetcode solution, (i almost figured this out by my self)
the only problem that i get is i'm not updating the left and right boundary, i just update the adjactent key
*/


class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> seqCountMap;
        int max = 0;

        for(int num : nums){
            if(!seqCountMap[num]){
                seqCountMap[num] = seqCountMap[num-1] + seqCountMap[num+1] + 1;
                
                //update the most left & right boundary length
                seqCountMap[num - seqCountMap[num-1]] = seqCountMap[num];
                seqCountMap[num + seqCountMap[num+1]] = seqCountMap[num];

                if(seqCountMap[num] > max){
                    max = seqCountMap[num];
                }
            }
        }

        return max;
    }
};
