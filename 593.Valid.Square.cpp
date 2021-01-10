#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int findDist(vector<int> a, vector<int> b){
        int x = a[0] - b[0];
        int y = a[1] - b[1];
        return x * x + y * y;
    }
    
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        //create variable vector<int>
        vector<int> dist(6);
        
        dist[0] = findDist(p1,p2); //
        dist[1] = findDist(p1,p3);
        dist[2] = findDist(p1,p4);
        dist[3] = findDist(p2,p3);
        dist[4] = findDist(p2,p4);
        dist[5] = findDist(p3,p4);
        
        sort(dist.begin(), dist.end());
        
        return dist[0] > 0 && dist[0] == dist[3] && dist[4] == dist[5];
        
    }
};


// four equal sides | four equal angles
/*
1. make a function to make the distnace
2. sort out the vector
3. compute the distance
4. return *something*


*/

int main() {

    return 0;
}
