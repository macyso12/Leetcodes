#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int largestPerimeter(vector<int>& A) {
        sort(A.begin(), A.end());
        for (int i = A.size()-3; i >= 0; i--){
            // condition, suppose the numbers are sorted. then a+b must be > c
            if (A[i] + A[i+1] > A[i+2]){
                // return perimeter
                return A[i] + A[i+1] + A[i+2];
            }
        }
        return 0;
    }
};

int main() {

    return 0;
}
