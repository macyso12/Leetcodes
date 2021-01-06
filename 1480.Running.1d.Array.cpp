#include <iostream>
#include <vector>

using namespace std;

/*
 Input: nums = [1,2,3,4]
 Output: [1,3,6,10]
 Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].
 
 Input: nums = [1,1,1,1,1]
 Output: [1,2,3,4,5]
 Explanation: Running sum is obtained as follows: [1, 1+1, 1+1+1, 1+1+1+1, 1+1+1+1+1].
 */

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        vector<int> result;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++){
            // add another element at the end of the vector (push_back)
            // the num at i position and add on the sum, after every iterations
            result.push_back(nums[i]+sum);
            // update sum every iterations
            sum += nums[i];
        }
        // need to return a vector<int> instead of a int, so i cant return sum
        return result;
    }
};

// loop through the array
// create a variable 'sum', update sum everytime when addition happens


int main() {

    return 0;
}
