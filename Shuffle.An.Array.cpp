#include <iostream>
#include <vector>

using namespace std;

/*
Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn].

Return the array in the form [x1,y1,x2,y2,...,xn,yn].

Input: nums = [2,5,1,3,4,7], n = 3
Output: [2,3,5,4,1,7]
Explanation: Since x1=2, x2=5, x3=1, y1=3, y2=4, y3=7 then the answer is [2,3,5,4,1,7].

Input: nums = [1,2,3,4,4,3,2,1], n = 4
Output: [1,4,2,3,3,2,4,1]

Input: nums = [1,1,2,2], n = 2
Output: [1,2,1,2]
*/

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        // need to return a vector <int>, so need to create a vector variable
        vector<int> result;
        int j = 0;
        
        // split the array into 2 parts
        for (long int i = nums.size()/2, j = 0; i < nums.size(); j++, i++){
            //add element at the end of the vector with the number
            result.push_back(nums[j]);
            result.push_back(nums[i]);
        }
        
        return result;
    }
};

// use a loop function, loop through the array and divide
// divide the array into 2 parts, to find the x1,x2...y1,y2
// andthen result (append) => push_back, add element at the end of the vector with the number
