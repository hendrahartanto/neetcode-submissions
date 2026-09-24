/*
initial solve
-------------
loop through all values
store the count of each values per iteration
after each iteration check if current value count is more than n/2, if yes return the value
if not, continue
*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> count;
        
        for(int i = 0; i < n; i++){
            count[nums[i]]++;
            if(count[nums[i]] > n/2) return nums[i];
        }
    }
};