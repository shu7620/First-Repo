//TODO:  K Divisible Elements Subarrays

// Given an integer array nums and two integers k and p, return the number of distinct subarrays, which have at most k elements that are divisible by p.

// Two arrays nums1 and nums2 are said to be distinct if:

// They are of different lengths, or
// There exists at least one index i where nums1[i] != nums2[i].
// A subarray is defined as a non-empty contiguous sequence of elements in an array.

#include <bits/stdc++.h>
using namespace std;

int countDistinct(vector<int> &nums, int k, int p)
{
    int n = nums.size();
    set<string> st;
    for (int i = 0; i < n; i++)
    {
        string temp = "";
        int cnt = 0;
        for (int j = i; j < n; j++)
        {
            if (nums[j] % p == 0)
                cnt++;
            if (cnt > k)
                break;
            temp += nums[j];
            st.insert(temp);
        }
    }
    return st.size();
}