#include <stdio.h>
#include <math.h>
#include <vector>

using namespace std; 

#include <vector>
#include <algorithm>

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;
        int start = 0;
        float maxVal = pow(10, 5);

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if (i - start + 1 == k) {
                maxVal = max(maxVal, (static_cast<float>(sum) / static_cast<float>(k)));
                sum -= nums[start];
                start += 1;
            }
        }
        return maxVal;
    }
};

int main (){

    return 0;
}