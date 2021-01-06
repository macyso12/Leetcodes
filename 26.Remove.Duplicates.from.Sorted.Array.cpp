#include <vector>
#include <iostream>

using namespace std;

/*
 Input: nums = [1,1,2]
 Output: 2, nums = [1,2]
 Explanation: Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively. It doesn't matter what you leave beyond the returned length.
 
 Input: nums = [0,0,1,1,1,2,2,3,3,4]
 Output: 5, nums = [0,1,2,3,4]
 Explanation: Your function should return length = 5, with the first five elements of nums being modified to 0, 1, 2, 3, and 4 respectively. It doesn't matter what values are set beyond the returned length.
 */

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0){
            return 0;
        }
        
        int length = 0;
        for (int i = 0; i < nums.size(); i++){
            // if elements not found the same, length ++, return the length at the end
            
            if (nums[length] != nums[i]){
                length++;
                // also and then assign the length to the num at i pos
                nums[length] = nums[i];
            }
        }
        return length+1;
    }
};

int main() {

    return 0;
}
