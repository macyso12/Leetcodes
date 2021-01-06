#include <vector>
#include <iostream>

using namespace std;

/*
 Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
 Output: 6
 Explanation: [4,-1,2,1] has the largest sum = 6.
 
 Input: nums = [1]
 Output: 1
 */

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // subarray has to be continuous, continuous number to have the largest sum
        // start from index i, j, n elements.
        // 0 -> 1 || 1 -> n-1 || 2 -> n-2
        // for i = 0. to n - 1 | for j = 0, n - 1| Sum of A, i to j, summing all the elements and keeping track of the maximum number
        // if sum > max, update max
        // return max
        if (nums.size() == 0)
            return 0;

        //initiate sum_max and the sum_includiing current numbers
        int sum_max = nums[0];
        int sum_including_current = nums[0];
        
        //it starts at 1, because we already take into account of the 0 in our previous steps
        // start looping through the array
        for(int i = 1; i < nums.size(); i++){
            //initiate n to be num[i] in array
            int n = nums[i];
            //calculate the sum when including the current number, with max() function
            // sum including current number + num[i] in array, and the number after
            sum_including_current = max(sum_including_current + n, n);
            //update sum_max, keep updating beacuse the sum has to be subarray
            //subarray has to be continuous
            sum_max = max(sum_max, sum_including_current);
        }
        //at last return sum max
        return sum_max;
    }
};

// A[], moving from left to right, i -> j
// keep track of two value, Sum and Sum[k]
// S[k] -> A[k] -> S[K-1]s + A[k]
// keep on mving, S<- max (S[k], S)

int main() {
    
    return 0;
}
