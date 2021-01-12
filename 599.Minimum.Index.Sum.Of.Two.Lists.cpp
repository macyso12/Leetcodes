#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string> result;
        unordered_map<string, int> hash;
        
        int indexSum = INT_MAX;
        
        // maping things into a map
        for (int i = 0; i < list1.size();i++){
            hash[list1[i]] = i;
        }
        
        // search it in list 2
        for (int i = 0; i < list2.size(); i++){
            // if they find item in hash map, and not reach the end
            if (hash.find(list2[i]) != hash.end()){
                //
                if (hash[list2[i]] + i < indexSum){
                    indexSum = hash[list2[i]] + i;
                    result.clear();
                    result.push_back(list2[i]);
                }
                else if (hash[list2[i]] + i == indexSum){
                    result.push_back(list2[i]);
                }
            }
        }
        
        return result;
    }
};



int main() {

    return 0;
}
