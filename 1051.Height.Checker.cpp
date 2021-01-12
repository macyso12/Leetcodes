#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int count = 0;
        vector<int> sorted;
        
        
        sorted = heights; // cloning the vector
        sort(sorted.begin(), sorted.end());
        
        for (int i = 0; i < heights.size(); i++){
            if (heights[i]!=sorted[i]){
                count ++;
            }
        }
        
        return count;
    }
};

int main() {

    return 0;
}
