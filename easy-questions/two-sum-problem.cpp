#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
    vector<int> twoSum(vector<int>& nums, int target);


int main(){
    vector<int> nums;
    nums.push_back(2);
    nums.push_back(7);
    nums.push_back(11);
    nums.push_back(15);
    int target = 9;
    vector<int> result = twoSum(nums, target);
    cout << result[0] << " " << result[1] << endl;
    return 0;
}

    // vector<int> twoSum(vector<int>& nums, int target) {
    //     vector<int> result;
    //     for(int i = 0; i < nums.size(); i++){
    //         for(int j = i + 1; j < nums.size(); j++){
    //             if(nums[i] + nums[j] == target){
    //                 result.push_back(i);
    //                 result.push_back(j);
    //                 return result;
    //             }
    //         }
    //     }
    //     return result;
    // }

    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> result;
        for(int i = 0; i < nums.size(); i++){
            int difference = target - nums[i];
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[j] == difference){
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            } 
        }
        return result;
    }

    // HASH MAP IMPLEMENTATION: 
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashmap;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            // count(const k): searches for elements whose key is k, 
            // returns number of elements.

            if (hashmap.count(complement)) { // if value exists in hashmap, true
                return {hashmap[complement], i};
                // returns target index and current vector index
            }
            hashmap[nums[i]] = i; 
            // If the complement is not found in the hashmap, 
            // we insert the current element nums[i] into the hashmap along with 
            // its index i using hashmap[nums[i]] = i.
        }

        return {}; // Return an empty vector if no solution is found
    }