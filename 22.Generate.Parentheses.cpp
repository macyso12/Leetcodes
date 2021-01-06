#include <vector>
#include <iostream>

using namespace std;
/*
 Input: n = 3
 Output: ["((()))","(()())","(())()","()(())","()()()"]
 
 Input: n = 1
 Output: ["()"]
 */


class Solution {
    vector<string> s;
public:
    void solve(string combo, int n, int mimicStack){
        if (n == 0 && mimicStack == 0){
            s.push_back(combo);
        }
        if (n > 0){
            solve (combo + '(', n - 1, mimicStack + 1);
        }
        if (mimicStack > 0){
            solve (combo + ')', + n, mimicStack - 1);
        }
    }
    vector<string> generateParenthesis(int n) {
        solve("", n, 0);
        return s;
    }
};

int main() {

    return 0;
}
