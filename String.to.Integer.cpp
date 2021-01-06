#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        
        //using stringstream
        stringstream Atoi;
        Atoi << s;
        
        int x = 0;
        Atoi >> x;
        
        return x;
    }
};
