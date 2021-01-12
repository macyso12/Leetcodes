#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> result;
        
        // brute force, loop through each word
        for(int i = 0; i < words.size(); i++){
            for(int j = 0; j < words.size(); j++){
                // if not the same word
                if (i != j){
                    // inititae size t foundword, to see if word is find
                    size_t found = words[j].find(words[i]);
                    // if word is found
                    if (found!= string::npos){
                        // then add to result string
                        result.push_back(words[i]);
                        break;
                    }
                }
            }
        }
        
        return result;
    }
};

int main() {

    return 0;
}
