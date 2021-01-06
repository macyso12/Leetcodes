#include <vector>
#include <iostream>

using namespace std;

/*
 Input: accounts = [[1,2,3],[3,2,1]]
 Output: 6
 Explanation:
 1st customer has wealth = 1 + 2 + 3 = 6
 2nd customer has wealth = 3 + 2 + 1 = 6
 Both customers are considered the richest with a wealth of 6 each, so return 6.
 
 Input: accounts = [[1,5],[7,3],[3,5]]
 Output: 10
 Explanation:
 1st customer has wealth = 6
 2nd customer has wealth = 10
 3rd customer has wealth = 8
 The 2nd customer is the richest with a wealth of 10.
 */

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_wealth = INT_MIN;
        // loop through the first array
        for(int i = 0; i < accounts.size(); i++){
            //initiate sum of the bank account, sum should be return to 0 every time it is checking someone else's bank account
            int sum = 0;
            // loop through others account number
            for(int j = 0; j < accounts[i].size(); j++){
                // add the number to sum + update sum
                sum += accounts[i][j];
            }
            // find the max wealth using max()
            max_wealth = max(max_wealth,sum);
        }
        //return max wealth person
        return max_wealth;
    }
};

int main() {

    return 0;
}
