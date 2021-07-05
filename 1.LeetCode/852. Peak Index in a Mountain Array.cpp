//problem Link:https://leetcode.com/problems/peak-index-in-a-mountain-array/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=max_element(arr.begin(),arr.end())-arr.begin();
        
        return n;
    }
};