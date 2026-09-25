/*
initial solve
--------------
we can use:
- bubble sort (slowest)
- merge sort
- quick sort
but i forgot aobut the merge and quick sort, so i will go with bubble sort
*/

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < nums.size() - 1 - i; j++){
                if(nums[j] > nums[j+1]){
                    int temp = nums[j];
                    nums[j] = nums[j+1];
                    nums[j+1] = temp;
                }
            }
        }

        return nums;
    }
};