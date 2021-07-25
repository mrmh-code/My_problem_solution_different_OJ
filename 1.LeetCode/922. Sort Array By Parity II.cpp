#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
       vector<int>even,odd;
        for(auto u: nums){
            if(u%2==0){
                even.push_back(u);
            }else{
                odd.push_back(u);
            }
        }

        for(int i=0; i<nums.size(); i+=2){
            nums[i]=even[i/2];
        }
        for(int i=1; i<nums.size(); i+=2){
            nums[i]=odd[i/2];
        }

        return nums;
    }
};
int main()
{

}