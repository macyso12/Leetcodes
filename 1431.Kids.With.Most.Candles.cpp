#include <iostream>
#include <vector>

using namespace std;

/*
 Input: candies = [2,3,5,1,3], extraCandies = 3
 Output: [true,true,true,false,true]
 
 Explanation:
 Kid 1 has 2 candies and if he or she receives all extra candies (3) will have 5 candies --- the greatest number of candies among the kids.
 Kid 2 has 3 candies and if he or she receives at least 2 extra candies will have the greatest number of candies among the kids.
 Kid 3 has 5 candies and this is already the greatest number of candies among the kids.
 Kid 4 has 1 candy and even if he or she receives all extra candies will only have 4 candies.
 Kid 5 has 3 candies and if he or she receives at least 2 extra candies will have the greatest number of candies among the kids.
 
 Input: candies = [4,2,1,1,2], extraCandies = 1
 Output: [true,false,false,false,false]
 Explanation: There is only 1 extra candy, therefore only kid 1 will have the greatest number of candies among the kids regardless of who takes the extra candy.
 
 Input: candies = [12,1,12], extraCandies = 10
 Output: [true,false,true]
 */

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int current_max = 0;
        //loop function to find the current_max
        for (int i = 0; i < candies.size(); i++){
            //finding the max using max(), with variables, comparing current_mac and candies at i position
            current_max = max(current_max, candies[i]);
        }
        
        vector<bool> result;
        for (int i = 0; i < candies.size(); i++){
            if (candies[i] + extraCandies >= current_max){
                // push_back add a additional element at the back of the vecotr
                result.push_back(true);
            }
            else{
                result.push_back(false);
            }
        }
        // return a boolean value
        return result;
    }
};

// extra candies is a int, if int candies + extracandies = larget amount of candies, return true;

// use loop to loop throuh array
// add extra candies to the int candies
// update max_candies to the int candies
// compare max_candies to the num behind it after it is + extra
// if larger, update max_candies => return true

int main() {

    return 0;
}
