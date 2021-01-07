
#include <iostream>

using namespace std;

class Solution {
public:
    
    int addDigits(int num) {
        // if num is already one digit, then just return the num
        if (num < 10){
            return num;
        }
        int sum = 0;
        // make a whie loop, loop through all the sums and add togeher
        do{
            // this while loop, will calculate the sum
            while (num != 0){
                //take the last digit = module it
                sum += num % 10;
                // delete the last digit, /= it
                num /= 10;
            }
            // e.g. if sum is 11, continue the loop
            if (sum < 10){
                return sum; // to continue the loop
            }
            // if sum is 10, num = sum | if num is 38
            else{
                // num =/= 28 but num = 10
                num = sum;
                sum = 0;
                // this will break out of the loop
            }
        }while(1);
        return sum;
    }
};

// find the sum of the two number
// if n.size() == 1, return the number


int main() {

    return 0;
}
