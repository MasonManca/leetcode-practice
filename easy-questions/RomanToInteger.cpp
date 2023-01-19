#include <iostream>
#include <stdio.h>

using namespace std;

int romanToInt(string s); 


int main(){

// test case 1 (III = 3)
string roman = "III";
int newInteger = romanToInt(roman);
cout << roman << "\treturns: \t" << newInteger << endl;

// test case 2 (LVIII = 58)
roman = "LVIII";
newInteger = romanToInt(roman);
cout << roman << "\treturns: \t" << newInteger << endl;

// test case 3 (MCMXCIV = 1994)
roman = "MCMXCIV";
newInteger = romanToInt(roman);
cout << roman << "\treturns: \t" << newInteger << endl;
}


int romanToInt(string s){
    int converted = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'I'){
            if(s[i+1] == 'V' || s[i+1] == 'X'){
                converted--;
                continue;
            }
            else{
                converted++;
                continue;
            }
        }
        if(s[i] == 'X'){
            if(s[i+1] == 'L' || s[i+1] == 'C'){
                converted -= 10;
                continue;
            }
            else{
                converted += 10;
                continue;
            }
        }
        if(s[i] == 'C'){
            if(s[i+1] == 'D' || s[i+1] == 'M'){
                converted -= 100;
                continue;
            }
            else{
                converted += 100;
                continue;
            }
        }
        if(s[i] == 'V')
            converted += 5;
        if(s[i] == 'L')
            converted += 50;
        if(s[i] == 'D')
            converted += 500;
        if(s[i] == 'M')
            converted += 1000;
    }
    return converted;
}