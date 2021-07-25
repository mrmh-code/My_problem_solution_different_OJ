#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
       int sum=0;
       for(auto u:nums){
          sum+=u;
       }

       sort(nums.begin(),nums.end());
        int len=nums.size()-1;
        int sum2=0;
        vector<int>v;
        while (sum>=sum2)
        {
            sum-=nums[len];
            sum2+=nums[len];
            v.push_back(nums[len]);
            len--;
        }
        
    return v;
    }
};

int main()
{

}