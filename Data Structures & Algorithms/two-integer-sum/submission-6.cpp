/*
use hashmap
loop every elements
    check if current num exists in the hashmap (it means current number is the pair solution of previous number)
        if found, return the pair of hashMap[current num] and current index
    
    find the difference between current value with target
    store the diff as key, and current index as value
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashMap;

        for(int i = 0; i < nums.size(); i++){
            if(hashMap.count(nums[i])){
                return {hashMap[nums[i]], i};
            }
            
            int diff = target - nums[i];
            hashMap[diff] = i;
        }

        return {};
    }
};
