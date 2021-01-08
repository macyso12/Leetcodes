#include <vector>
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hashMap;
        
        // assign strs to s, for easy access
        for(string s : strs){
            string t = s;
            sort(t.begin(), t.end());
            // putting them into hashes, adding elements at the back of s
            hashMap[t].push_back(s);
        }
        // inititae return variable
        vector<vector<string>> result;
        // loop again in the hashMap, loop with element as hashMap
        // pass by address, find the address in the hashMap
        for (auto& el : hashMap){
            // if find, add it at the back of the vector
            //.first = key, .second = mapped value {key:value}
            //el.second, get the mapped value, instead of the key
            result.push_back(el.second);
        }
         
        // return vector<vector<string>>
        return result;
    }
};

// sort all strings
// creat a unordered map
// sort the sorted strs into the maps
// group them ?



int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
