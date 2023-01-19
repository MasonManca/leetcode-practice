#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        
        int temp = x;
        int reversed = 0;

        while(x != 0){
            reversed = reversed * 10 + x % 10;
            x /= 10;
        }
        if(reversed == temp)
            return true;
    }
};

int main() {

}