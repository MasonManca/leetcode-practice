#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

// height = [1,8,6,2,5,4,8,3,7]
// output = 49
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1, result = 0;
        while (left < right) {
            result = max(result, min(height[left], height[right]) * (right - left));
            if (height[left] < height[right]) {
                ++left;
            } else {
                --right;
            }
        }
        return result;
    }
};


int main(){

}