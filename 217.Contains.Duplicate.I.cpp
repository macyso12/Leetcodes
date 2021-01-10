#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        // i < intititae nums.size() - 1 => length, cuz size start from 1, but the it start at 0
        for(int i = 0; i < int(nums.size())-1; i++){
            if (nums[i] == nums[i+1]){
                return true;
            }
        }
        // return a boolean
        return false;
    }
};

// sort vector
// check if n[i] == n[i+1]
// if so, return true;
// if not, return false;

int main() {

    return 0;
}
