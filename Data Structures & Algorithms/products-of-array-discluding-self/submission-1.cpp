/*
initial solve
--------------
2 array one that store sum dot from start, one that store sum dot from end
add buffer 1 at the start of each array so that it can be product dotted
*/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> start(1, 1);
        vector<int> end(1, 1);
        vector<int> ans;

        for(int i = 0; i < n - 1; i++){
            start.push_back(nums[i] * start.back());
        }

        for(int i = n - 1; i > 0; i--){
            end.push_back(nums[i] * end.back());
        }

        for(int i = 0; i < n; i++){
            ans.push_back(start[i] * end[n - 1 - i]);
        }

        return ans;
    }
};
