class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> hashMap;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            hashMap[nums[i]]++;
        }

        for(const auto& pair : hashMap){
            if(pair.second > n / 2){
                return pair.first;
            }
        }

        return 0;
    }
};