#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
            int n=nums.size();
        int firstpair=nums[n-1]*nums[n-2];
        int secondpair=nums[0]*nums[0+1];
        int maxi=firstpair-secondpair;
        return maxi;
    }
};

int main()
{

}