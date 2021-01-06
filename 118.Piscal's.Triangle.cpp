#include <iostream>
#include <vector>

using namespace std;

/*
 Input: 5
 Output:
 [
      [1],
     [1,1],
    [1,2,1],
   [1,3,3,1],
  [1,4,6,4,1]
 ]
 */

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        if (numRows < 1){
            return res;
        }
        vector<int> curr = {1}, next;
        res.push_back(curr);
        while (numRows > 1){
            next.push_back(1);
            for ( int i = 1; i < curr.size(); i++)
                next.push_back(curr[i]+curr[i-1]);
                next.push_back(1);
                curr = next;
                next.clear();
                res.push_back(curr);
                numRows--;
        }
        return res;
    }
};

int main() {

    return 0;
}
