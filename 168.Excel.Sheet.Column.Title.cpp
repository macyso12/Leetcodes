#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    string convertToTitle(int n) {
        string result;
        
        //loop the integer
        while (n > 0){
            n--;
            // get the last digit to find the alphabet
            int curr = n % 26;
            // removethe last digit .. i dont know
            n /= 26;
            // addelements at the back, result is a string,
            result.push_back(curr + 'A');
        }
        // get the result + reverse the string
        reverse(result.begin(), result.end());
        // return a string
        return result;
    }
};


int main() {

    return 0;
}
