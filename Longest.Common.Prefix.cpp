#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*
 Input: strs = ["flower","flow","flight"]
 Output: "fl"
 
 Input: strs = ["dog","racecar","car"]
 Output: ""
 Explanation: There is no common prefix among the input strings.
 */

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string common;
        int count = 0;
        int min = 1000;
        
        for (int i = 0; i < strs.size(); i++){
            // for each string, store the value to len for checking
            int len = strs[i].length();
            if (len < min){
                // lengtht of min str store in min
                min = len;
                common = strs[i];
            }
        }
        for (int i = 0; i < min; i++){
            for (int j = 0; j < strs.size(); j++){
                if (strs[j][i] != common[i]){
                    return common.substr(0, count);
                }
            }
            count ++; // increase count so the program will know where to stop appending
        }
        return common.substr(0, count);
    }
};

int main(){
    
    return 0;
}
// LOGIC
// for (i = 0 to minLen){
// for (j = 0 to strssize()){
// if (strs[i][j] != str[i])
// return str.substr(0,count)
//} count ++
//} return str.substr(0,count)

// loop through the characters, and then it will increase the count
// when the character is not the same, then the count wil stop.
// that's why te substr is starting at 0, first index, and stop atthe count
