#include <stdio.h>
#include <iostream>

using namespace std; 


// Given two strings needle and haystack
// return the index of the first occurrence of needle in haystack, 
// or -1 if needle is not part of haystack.

// Example 1: 

// Input: haystack = "sadbutsad", needle = "sad"
// Output: 0
// Explanation: "sad" occurs at index 0 and 6.
// The first occurrence is at index 0, so we return 0.

class Solution{
    public:


    int strStr(string haystack, string needle) {

        int haystackLen = haystack.length();
        int needleLen = needle.length();

        // Handle edge cases
        if (needleLen == 0) {
            return 0;
        }
        if (needleLen > haystackLen) {
            return -1;
        }

        for (int i = 0; i <= haystackLen - needleLen; i++) {
            int j;
            for (j = 0; j < needleLen; j++) {
                if (haystack[i + j] != needle[j]) {
                    break;
                }
            }
            if (j == needleLen) {
                return i;
            }
        }
        return -1;
    }

};