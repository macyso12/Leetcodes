#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        vector<vector<int>> result;
        int i = 0;
        int j = 0;
        int lenA = A.size();
        int lenB = B.size();
        
        //implement while loop, loop through the arrays
        while( i < lenA && j < lenB){
            // find the max, while
            int start = max(A[i][0], B[j][0]);
            int end = min(A[i][1], B[j][1]);
            
            // check if starting value is in the end value, which mean it is inside the end interval
            if (start <= end)
                result.push_back({start,end});
            if (A[i][1] < B[j][1])
                i++;
            else
                j++;
        }
        
        // return vector<vector<int>>
        return result;
    }
};
/*
     col[0] [1]        [0]  [1]             [r][c]
row     0    2          1    5
        5   10          8    12
        13  23          15   24
        24  25          25   26
*/

int main() {

    return 0;
}
