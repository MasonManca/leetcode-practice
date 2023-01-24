#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

// height = [1,8,6,2,5,4,8,3,7]
// output = 49
class Solution{
    public:
    int maxArea(vector<int>& height){

        if(!height.size())
            return 0;
        
        int largestContainer = 0;
        int sizeOfArray = height.size();
        int mid = sizeOfArray / 2;

        for(int i = 0; i < mid; i++){
            for(int j = sizeOfArray - 1; j >= mid; j--){
                int x = j - i;
                if(height[j] < height[i]){
                    if((x * height[j]) > largestContainer)
                        largestContainer = x * height[j];
                }
                else{
                    if((x * height[i]) > largestContainer)
                        largestContainer = x * height[j];
                }
            }
        }
        return largestContainer;

    }
};


int main(){

}