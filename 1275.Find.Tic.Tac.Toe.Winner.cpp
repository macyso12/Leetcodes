#include <vector>
#include <iostream>
#include <set>

using namespace std;

class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        //create variable set (map), to separate the data into two players
        // set allow you to create two empty sets for storage purposes
        set <vector<int>> A;
        set <vector<int>> B;
        // created two empty sets to store value
        
        // store value into sets
        // A empty sets
        for (int i = 0; i < moves.size(); i = i + 2){
            A.insert(moves[i]);
        }
        
        // B empty sets
        for (int i = 1; i < moves.size(); i = i + 2){ // since A is starting at 0, 0 idx value already stores, so moving on to the next one, we iterate through the second one
            B.insert(moves[i]);
        }
        
        // use brute force to find out who wins
        // zz | oz | tz
        // zo | oo | to
        // zt | ot | tt
        // brute force, 3 horizontal combo, 3 vertical combo, 2 diagonal combo
        // set each of the variables with the [r][c]
        vector<int> zz {0,0};
        vector<int> oz {0,1};
        vector<int> tz {0,2};
        vector<int> zo {1,0}; //oo,zo,ot,tz
        vector<int> oo {1,1};
        vector<int> to {1,2};
        vector<int> zt {2,0};
        vector<int> ot {2,1};
        vector<int> tt {2,2};
        
        // use brute force to find out who wins
        // if (find(sth) != .end)
        // Draw / Pending
                if(A.find(zz)!=A.end() && A.find(zo)!=A.end() && A.find(zt)!=A.end()){
            return "A";
        }
        if(A.find(oz)!=A.end() && A.find(oo)!=A.end() && A.find(ot)!=A.end()){
            return "A";
        }

        if(A.find(tz)!=A.end() && A.find(to)!=A.end() && A.find(tt)!=A.end()){
            return "A";
        }

        if(A.find(zz)!=A.end() && A.find(oz)!=A.end() && A.find(tz)!=A.end()){
            return "A";
        }

        if(A.find(zo)!=A.end() && A.find(oo)!=A.end() && A.find(to)!=A.end()){
            return "A";
        }

        if(A.find(zt)!=A.end() && A.find(ot)!=A.end() && A.find(tt)!=A.end()){
            return "A";
        }
        if(A.find(zz)!=A.end() && A.find(oo)!=A.end() && A.find(tt)!=A.end()){
            return "A";
        }
        if(A.find(zt)!=A.end() && A.find(oo)!=A.end() && A.find(tz)!=A.end()){
            return "A";
        }



        if(B.find(zz)!=B.end() && B.find(zo)!=B.end() && B.find(zt)!=B.end()){
            return "B";
        }
       if(B.find(oz)!=B.end() && B.find(oo)!=B.end() && B.find(ot)!=B.end()){
            return "B";
        }

        if(B.find(tz)!=B.end() && B.find(to)!=B.end() && B.find(tt)!=B.end()){
            return "B";
        }

        if(B.find(zz)!=B.end() && B.find(oz)!=B.end() && B.find(tz)!=B.end()){
            return "B";
        }

        if(B.find(zo)!=B.end() && B.find(oo)!=B.end() && B.find(to)!=B.end()){
            return "B";
        }

        if(B.find(zt)!=B.end() && B.find(ot)!=B.end() && B.find(tt)!=B.end()){
            return "B";
        }
        if(B.find(zz)!=B.end() && B.find(oo)!=B.end() && B.find(tt)!=B.end()){
            return "B";
        }
        if(B.find(zt)!=B.end() && B.find(oo)!=B.end() && B.find(tz)!=B.end()){
            return "B";
        }

        if(moves.size()==9){
            return "Draw";
        }
        else{
            return "Pending";
        }
        
    }
};

// 1. we can either use brute force and check through every possible winning chance

// 3. Draw / Pending result, occur when the trys are = 9 ( max 9 boxes to check ), check. the size of the moves

int main() {
 
    return 0;
}
