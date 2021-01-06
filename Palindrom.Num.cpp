#include <iostream>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
            
        int temp_num = x;
        int digit;
        long int rev = 0;
        
        while (x > 0) {
            digit = x % 10;
            rev = (rev * 10) + digit;
            x /= 10;
        }
        
        if (temp_num == rev && x >= 0){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    
    return 0;
}
