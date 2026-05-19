/*
add two pointer at the end and start of the array
if num[i] + num[n-1] > target, decremnet the end pointer
if num[i] + num[n-1] < target, increment the start pointer
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int j = numbers.size() - 1;
        while(true){
            if(numbers[i] + numbers[j] == target){
                return {i+1, j+1};
            }else if(numbers[i] + numbers[j] > target){
                j--;
            }else if (numbers[i] + numbers[j] < target){
                i++;
            }
        }
    }
};
