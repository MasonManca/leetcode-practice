#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std; 


// An array is monotonic if it is either monotone increasing or monotone decreasing.
// An array nums is monotone increasing if for all i <= j, nums[i] <= nums[j] (Array[i] =< Array[i+1]).
// An array nums is monotone decreasing if for all i <= j, nums[i] >= nums[j](Array[i] >= Array[i+1]).
// Given an integer array nums, return true if the given array is monotonic, or false otherwise.

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {

    bool increasing = true;
    bool decreasing = true;

    for (int i = 0; i < nums.size() - 1 ; i++) {

        if (nums[i] > nums[i+1]) 
            increasing = false;
        
        if (nums[i] < nums[i+1]) 
            decreasing = false;
        
    }
    return (increasing || decreasing);
    // Bitwise OR operator, needs 1 to be true. so either increasing or decreasing 
    }
};

// attempt 1: 
        // bool increasing = true;
        // bool decreasing = true;

        // for(int i = 0; i < nums.size(); i++){
        //     if(nums[i] < nums[i+1])
        //         increasing = false;
        //     if(nums[i] > nums[i+1])
        //         decreasing = false;
        // }
        // return (increasing || decreasing);

// gpt: 
// bool isMonotonic(vector<int>& nums) {
//     bool increasing = true;
//     bool decreasing = true;

//     for (int i = 1; i < nums.size(); i++) {
//         if (nums[i] < nums[i - 1]) {
//             increasing = false;
//         }
//         if (nums[i] > nums[i - 1]) {
//             decreasing = false;
//         }
//     }

//     return increasing || decreasing;
// }