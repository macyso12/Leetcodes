#include <vector>
#include <iostream>
#include <unordered_map>
//using hashmap to put number in a table

using namespace std;

vector<int> twoSum(vector<int> &numbers, int target)
{
    //Key is the number and value is its index in the vector.
    unordered_map<int, int> hash;
    // int  0   1   2   3   4   5   6   7   8   9
    // ----------------------------------------------
    // int *if find the number, it will be put in the grid accoridngly.
    // then when check for numbertofind, then it will directly find it in the according grid, instead of looping through all number
    vector<int> result;
    // as we are finidng which two number to add together.
    // minus the num[i] with the target num, and search for the number to find that is = to target-num[i]
    for (int i = 0; i < numbers.size(); i++) {
        int numberToFind = target - numbers[i];

            //if numberToFind is found in map, return them
        if (hash.find(numberToFind) != hash.end()) {
                    //+1 because indices are NOT zero based
            result.push_back(hash[numberToFind] + 1);
            result.push_back(i + 1);
            return result;
        }

        // else number was not found. Put it in the map. for future looping uses.
        hash[numbers[i]] = i;
    }
    return result;
}

int main() {

    return 0;
}
