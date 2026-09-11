class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        //create hashset
        //loop all input
            //check if current value already exists in hashset
                //if yes return true
            //insert input into hashset

        unordered_set<int> numSet;
        for(int i = 0; i < nums.size(); i++){
            if(numSet.find(nums[i]) != numSet.end()){
                return true;
            }

            numSet.insert(nums[i]);
        }

        return false;
    }
};