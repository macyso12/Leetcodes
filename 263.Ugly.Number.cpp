
#include <iostream>
using namespace std;

class Solution {
public:
    bool isUgly(int num) {
        if(num == 0){
            return false;
        }
        // because of the constraint with ugly numbers are pos numbers
        if (num < 1){
            return 0;
        }
        // find if after module by certain numbers, the result will be 0
        // if the num is moduel to is 0, then it is divisible
        while (num > 1){
            if (num % 2 == 0){
                num /= 2;
            }
            else if (num % 3 == 0){
                num /= 3;
            }
            else if (num % 5 == 0){
                num /= 5;
            }
            else {
                return false;
            }
        }
        
        return true;
    }
};


// check if the number is divisible by 2, 3, 5
// if the num is 0, then it return false, cuz its onl factor is 0 (special case)



int main() {

    return 0;
}
