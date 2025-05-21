//TODO: Total Appeal of A String

// The appeal of a string is the number of distinct characters found in the string.

// For example, the appeal of "abbca" is 3 because it has 3 distinct characters: 'a', 'b', and 'c'.
// Given a string s, return the total appeal of all of its substrings.

// A substring is a contiguous sequence of characters within a string.


#include<bits/stdc++.h>
using namespace std;

  long long appealSum(string s) {
        int n=s.length();
        vector<long long> dp(n+1);
        vector<long long> lastIndex(26,-1);
        long long ans=0;
        for(int i=0;i<n;i++){
           int c=s[i]-'a';
           dp[i+1]=dp[i]+i-lastIndex[c];
           ans+=dp[i+1];
           lastIndex[c]=i;
        }
        return ans;
    }