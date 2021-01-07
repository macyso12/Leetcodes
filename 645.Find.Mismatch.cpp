#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //[1,3,4,2,2]
        //[1,2,2,3,4]
        sort(nums.begin(), nums.end());
        int duplicate = 0;
        
        // nums.size()-1 = 5 - 1 = 4, loop through [0,4] = 5 nums
        //size() is starting from 1 is not empty string
        for (int i = 0; i < nums.size()-1; i++){
            if (nums[i] == nums[i+1]){
                duplicate = nums[i];
            }
        }
        return duplicate;
    }
};

// can use sort, sorting out the array
// if num[i] == num[i+1], then return n[i]

int main() {

    return 0;
}
