//TODO: Remove Digit From Number to Maximize Result

// You are given a string number representing a positive integer and a character digit.

// Return the resulting string after removing exactly one occurrence of digit from number such that the value of the resulting string in decimal form is maximized. The test cases are generated such that digit occurs at least once in number.

#include <bits/stdc++.h>
using namespace std;

 string removeDigit(string number, char digit) {
        int li=number.find_last_of(digit);
        int n=number.length();
        for(int i=0;i<n-1;i++){
            if(number[i]==digit){
                if(i+1<n && number[i+1]>number[i]) return number.erase(i,1);
                else if(i==li) return number.erase(i,1);
            }
        }
        return number.erase(n-1,1);
    }