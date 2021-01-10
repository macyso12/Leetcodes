#include <vector>
#include <iostream>
#include <map>

using namespace std;

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> result; // result is nothingggggg !!!!!
        
        // exceptional cases
        if (digits.size() == 0){
            return result;
        }
        result.push_back("");
        
        // result.push_back("");
        // create map variable for storing variables into numbers
        
        // empty map container
        map <char, string> m;
        
        // inseritng things into the map, char & strings - letters
        // mapping char & strings into map for future access
        m.insert ({'2', "abc"});
        m.insert ({'3', "def"});
        m.insert ({'4', "ghi"});
        m.insert ({'5', "jkl"});
        m.insert ({'6', "mno"});
        m.insert ({'7', "pqrs"});
        m.insert ({'8', "tuv"});
        m.insert ({'9', "wxyz"});
        
        // loop through all the three numbers with a 3 nested loops with differentr parameters
        //first loop
        for (int i = 0; i < digits.size(); i++){
            //make a string, to find the MAP at the index "digit" in i pos, everytime it loops
            string s = m[digits[i]];
            vector<string> v;
            // second loop, through the s string parameter
            for (int j = 0; j < s.size(); j++){
                // third loop, through the result size, for pushing back
                // adding elements at the end of the vector string
                for (int k = 0; k < result.size(); k++){
                    // result is in k variable, so it makes sense to push back at k instead of i or j
                    // same thing goes with string s
                    v.push_back(result[k]+s[j]); // vector<string>
                }
            }
            result = v; // in order to return result, and they have the same type so they can be == tgt
        }
        
        //return a vector<string>
        return result;
    }
};

// if digit.size() == 0  => return {}vector<string>res;
// every number has 3 letters assign to it, so need to have 3 nested loop for all the 3 charactesrfssssss



int main() {

    return 0;
}
