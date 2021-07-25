#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>v;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]%2==0){
                v.push_back(nums[i]);
            }
        }
        for(auto u: nums){
            if(u%2==1){
                v.push_back(u);
            }
        }
        return v;
    }
};

int main()
{

}