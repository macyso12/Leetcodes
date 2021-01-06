#include <iostream>
#include <vector>

using namespace std;

/*
 Input: nums = [4,2,3]
 Output: true
 Explanation: You could modify the first 4 to 1 to get a non-decreasing array.
 
 Input: nums = [4,2,1]
 Output: false
 Explanation: You can't get a non-decreasing array by modify at most one element.
 */

class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int counter = 0;
        
        int current_num = 0;
        for (int i = 0; i < nums.size()-1; i++){
            if (nums[i] > nums[i+1]) {
                // how many number does the program need to modify
                ++counter;
                // update current number
                current_num = i;
            }
        }
        
        // if need modify two number, false
        if (counter >= 2)
            return false;
        // if current number is 0, true
        if (current_num == 0 || current_num == nums.size()-2)
            return true;
        // if num array at current number is smaller than the number behind it, true
        // or if the number besides the current number index, right is bigger than left, which mean ascending sequence, true
        if (nums[current_num] <= nums[current_num+2] || nums[current_num-1] <= nums[current_num+1])
            return true;
        return false;
    }
    /*int nondecreasing (vector<int>& nums){
            int count = 0;
        for (int i = 1; i < nums.size(); i++){
            if (nums[i] >= nums[i+1]){
                if (i == 1 || nums[i-2] <= nums[i]){
                    nums[i-1] = nums[i];
                    count ++;
                }
                else{
                    nums[i] = nums[i-1];
                    count ++;
                }
            }
        }
        return count;
    }
    
    bool checkPossibility(vector<int>& nums) {
        if(nondecreasing(nums)<=1){
            return true;
        }
        else {
            return false;
        }*/
};

// modify only 1 elements, check if it  can be non-decreasing
// nums[i] <= nums[i + 1], if this is true, then check i - 1 index & i + 2 index
int main() {

    return 0;
}
