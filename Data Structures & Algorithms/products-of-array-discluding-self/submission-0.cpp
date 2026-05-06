/*
i gave up to figure out the optimal solution, so i look up the solution
prefix + postfix sum
======================
prefix will get the accumulative dot product from 1st element until 2nd last element, the first element at prefix will always be 1
suffix will get the accumulative dot product from last element untul 2nd element, the last element at suffix is 1
why the first element of prefix & last element of suffix is 1?
because the result is the dot product of suffix and prefix at current index
so the first element of suffix already represented the result of first element, there are nothing left to do, so we just multiply it by 1 (nothing changed)
*/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        vector<int> output(size, 1);
        output[0] = 1; 

        for(int i = 1; i < size; i++){
            output[i] = output[i-1] * nums[i-1];
        }

        int postfix = 1;
        for(int i = size-1; i >= 0; i--){
            output[i] = output[i] * postfix;
            postfix *= nums[i];
        }

        return output;
    }
};
