//TODO:Minimum Consecutive Cards to Pick Up

// You are given an integer array cards where cards[i] represents the value of the ith card. A pair of cards are matching if the cards have the same value.

// Return the minimum number of consecutive cards you have to pick up to have a pair of matching cards among the picked cards. If it is impossible to have matching cards, return -1.

#include <bits/stdc++.h>
using namespace std;

int minimumCardPickup(vector<int> &cards)
{
    int n = cards.size();
    int ans = INT_MAX;
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        if (mpp.find(cards[i]) != mpp.end())
        {
            ans = min(ans, i - mpp[cards[i]] + 1);
        }
        mpp[cards[i]] = i;
    }
    return ans == INT_MAX ? -1 : ans;
}

//INFO: Testing git working 