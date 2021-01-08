#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> result {};
        
        // sorting method
        sort(intervals.begin(), intervals.end());
        
        //loop through intervals
        for(const auto&i : intervals){
            //check for intersections
            // if current interval START value is smaller or equal to the previous interval END value, they intersect
            // if result is not empty, and intervals at 0 pos, smaller or equal to the next interval
            // at 1 pos
            //last element in the vector
            if (!result.empty() && i[0] <= result.back()[1]){
                //Returns the largest of a and b. (max())
                result.back()[1] = max(i[1], result.back()[1]);
            }
            else{
                //Inserts a new element at the end of the vector, similar to push_back
                result.push_back(i);
            }
        }
        
        //return vector<vector<<int>>
        return result;
    }
};


int main() {

    return 0;
}
