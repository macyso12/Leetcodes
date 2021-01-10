#include <unordered_map>
#include <iostream>

using namespace std;

class Solution {
public:
    unordered_map<int,int> hashMap;
    int tribonacci(int n) {
        
        if (hashMap.find(n) != hashMap.end()){
            //Given n, return the value of Tn
            return hashMap[n];
        }
        int result;
        //T0 = 0
        if (n == 0 ){
            return 0;
        }
        //T1 = 1, T2 = 1
        if (n == 1 || n == 2){
            return 1;
        }
        // if n == 4 | 1 + 1 + 2 = 4
        result = tribonacci(n-3) + tribonacci(n-2) + tribonacci(n-1);
        hashMap[n] = result;
        return result;
    }
};

// make a hashmap


int main() {

    return 0;
}
