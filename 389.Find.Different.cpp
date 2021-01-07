
#include <iostream>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        
        //sort the two string, so they will have the same order for easy coparison
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        
        // use loop to loop in s, and then compare it with t a the same idx
        for (int i = 0; i < s.length(); i++){
            // after looping in s, if s at i pos is not the same as t at i pos, return t
            if (s[i] != t[i]){
                return t[i];
            }
        }
        // return char
        // else return the last char of string s by finding the last idx => find the length and then -1 for last idx
        return t[t.length()-1];
    }
};
// loop through s and t, find the last char in t


int main() {

    return 0;
}
