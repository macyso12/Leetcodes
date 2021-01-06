#include <iostream>
#include <vector>

using namespace std;
/*
 Input: height = [1,8,6,2,5,4,8,3,7]
 Output: 49
 Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.
 
 Input: height = [4,3,2,1,4]
 Output: 16
 
 Input: height = [1,2,1]
 Output: 2
 */
class Solution {
public:
    int maxArea(vector<int>& height) {
        int min_height = height[0];
        int max_height = height[height.size()-1];
        int min_idx = 0;
        int max_idx = height.size()-1;
        
        if (max_height < min_height){
            min_height = max_height;
            min_idx = max_idx;
            max_height = height[0];
            max_idx = 0;
        }
        int w = height.size()-1;
        int max_area = min_height*w;
        
        while (w > 0){
            int idx = min_idx;
            while(height[idx] <= min_height){
                if (min_idx < max_idx){
                    idx++; // if its left, then ++
                }
                else{
                    idx--; //if its right, then --
                }
                w --;
                if (w < 1){
                    break;
                }
                if (height[idx] > max_height){
                    min_height = max_height;
                    min_idx = max_idx;
                    max_idx = idx;
                    max_height = height[idx];
                }
                else{
                    min_idx = idx;
                    min_height = height[idx];
                }
                max_area = max(max_area, w*min_height);
            }
        }
        return max_area;
    }
};

int main(){
    
    return 0;
}
