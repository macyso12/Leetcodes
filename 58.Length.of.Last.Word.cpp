#include <sstream>
#include <string>
#include <iostream>

using namespace std;
/*
 Input: s = "Hello World"
 Output: 5
 
 Input: s = " "
 Output: 0
 */


class Solution {
public:
    int lengthOfLastWord(string s) {
        //initiating stringstream by ss and storing it in s
        stringstream ss(s);
        //initiate variable word
        string word;
        //storing the ss into the string (word)
        while (ss >> word){}
        //return the length of word
        return word.length();
    }
};
// use stringstream function to convert string into int
// return an integar

int main() {

    return 0;
}
