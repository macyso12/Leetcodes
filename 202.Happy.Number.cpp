#include <unordered_set>
#include <iostream>

using namespace std;
/*
 Input: n = 19
 Output: true
 Explanation:
 12 + 92 = 82
 82 + 22 = 68
 62 + 82 = 100
 12 + 02 + 02 = 1
 */

class Solution {
public:
    int sum_of_square(int n){
        int sum = 0;
        //endless while loop
        while(n){
            //take the last digit and square it
            int last = n%10;
            sum += last*last;
            // divide the original num by 10, and then get the last digit again for the loop
            n /= 10;
        }
        return sum;
    }
    
    bool isHappy(int n) {
        if (n <= 0){
            return false;
        }
        // unordered set cannot be modify but can insert and remove
        unordered_set<int>cache;
        // finding its grid / table column
        while(cache.find(n) == cache.end()){
            // inserting the n into the hash
            cache.insert(n);
            // calling for the function to calculate the sum
            n = sum_of_square(n);
            // implement if stat, if n == 1, return true
            if (n == 1){
                return true;
            }
        }
        return false;
    }
};

// replace the number by the square of the sum digit
// loop it until it ends with 1
// if sucessful, return true, else false;

int main() {
 
    return 0;
}
