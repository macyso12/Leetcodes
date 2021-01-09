

#include <iostream>
using namespace std;

class Solution {
public:
    int arrangeCoins(int n) {
        // create variable count
        int count = 0;
        
        // create loop for the stairs
        for (int i = 1; i <= n; i++){
            n -= i;
            count ++;
        }
        
        // return int
        return count;
    }
};

// if n = 5
// .                // create loop from here, i = 1 (1 is taken from n)
// . .              // when i = 2, n : n - i (because the frist line already took one of the num)
// . . .            //
// . . . .

int main() {

    return 0;
}
