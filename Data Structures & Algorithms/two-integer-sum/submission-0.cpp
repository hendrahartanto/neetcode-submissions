/*
loop every element, calculate the difference of each element to the target
if current element does not exists in the hashmap, add the difference as the key, and the index as the value
if currrent element exists, print the value of the difference and cucrent index
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashMap;
        
        for(int i = 0; i < nums.size(); i++){
            if(hashMap.find(nums[i]) != hashMap.end()){
               return {hashMap[nums[i]], i};
            }
            hashMap[target - nums[i]] = i;
        }
        return {-1, -1};
    }
};
