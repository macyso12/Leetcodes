#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;
/*
 Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.
 
 Input: nums = [3,2,3]
 Output: [3]
 
 Input: nums = [1]
 Output: [1]
 */

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums){
        // variables for map and return value
        unordered_map<int,int> hash;
        vector<int> result;
        
        for (int i = 0; i < nums.size(); i++){
            // from hash map at index nums at i, count ++, keep track of counter
            hash[nums[i]]++;
        }
        
        // iterate through the hash map from the beginning to the end, (if it has not reach the end())
        for (auto it = hash.begin(); it != hash.end(); it++){
            if (it -> second > nums.size()/3){
                // -> refer to the key after / second el
                //push_back add value to the vector, add the first value to the vector
                result.push_back(it->first);
            }
        }
        return result;
    }
};

// using a hashmap for counter, and count ++ everytime if find the number from nums

// put hte numbers in it

int main() {

    return 0;
}
