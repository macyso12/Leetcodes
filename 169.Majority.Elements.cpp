#include <vector>
#include <iostream>

using namespace std;

/*
 Input: nums = [3,2,3]
 Output: 3
 
 Input: nums = [2,2,1,1,1,2,2]
 Output: 2
 */

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //int len = nums.size()/2;
        //[2,2,1,1,1,2,2]
        //[1,1,1,2,2,2,2]
        sort(nums.begin(), nums.end());
        // return nums[7/2] => nums[3.5] => find nums[3] == 2
        return nums[nums.size()/2];
    }
};
// if the number appear more than [n/2] times, it is the majority num
// sort() the numbers
//create dup [num[i]]
// if n[i] == n[i+1], count ++
// if stat, compare if count > [n/2] times
// if yes/true, return dup;


int main() {

    return 0;
}
