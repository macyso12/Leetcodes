#include <iostream>
#include <vector>

using namespace std;

/*
 Input: candidates = [2,3,6,7], target = 7
 Output: [[2,2,3],[7]]
 Explanation:
 2 and 3 are candidates, and 2 + 2 + 3 = 7. Note that 2 can be used multiple times.
 7 is a candidate, and 7 = 7.
 These are the only two combinations.
 
 Input: candidates = [2,3,5], target = 8
 Output: [[2,2,2,2],[2,3,3],[3,5]]
 
 Input: candidates = [2], target = 1
 Output: []
 
 Input: candidates = [1], target = 2
 Output: [[1,1]]
 */

class Solution {
public:
    
    void find_number(vector<int>candidates, vector<vector<int>>& res, vector<int>&v, int target, int index){
        if (target < 0){
            return;
        }
        if (target == 0){
            res.push_back(v);
        }
        for (int i = index; i < candidates.size(); i++){
            v.push_back(candidates[i]);
            find_number(candidates, res, v, target-candidates[i], i);
            v.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>res;
        vector<int>v;
        find_number(candidates,res,v,target,0);
        return res;
    }
};


int main() {

    return 0;
}
