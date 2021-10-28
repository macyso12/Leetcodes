class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        // Use a hashmap to store the key-value pair
        // loop through the vector, and hash the value into the key if repeated
        // update result in map at index.
        unordered_map <int, int> hashMap;
        
        // initialize return value int
        int result = 0;
        
        for (auto i : nums){
            // hashing value into key as pairs
            result += hashMap[i]++;
        }
        return result;
    }
};
