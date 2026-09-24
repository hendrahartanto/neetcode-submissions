/*
initial solve
-------------
remove all occurence using erase() function
loop through all elements
check if val != curr value, count++, remove current element in nums
return res
*/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        erase(nums, val);
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != val) count++;
        }

        return count;
    }
};