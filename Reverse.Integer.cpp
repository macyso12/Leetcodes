#include <iostream>
using namespace std;

/*
 Input: x = 123
 Output: 321
 
 Input: x = -123
 Output: -321
 
 Input: x = 120
 Output: 21
 */

class Solution {
public:
    int reverse(int x) {
        long long ans=0;
        while(x!=0){
            int k=x%10;
            ans=ans*10+k;
            x=x/10;
        }
        return (ans>INT_MAX or ans<INT_MIN)?0:ans;
    }
};
