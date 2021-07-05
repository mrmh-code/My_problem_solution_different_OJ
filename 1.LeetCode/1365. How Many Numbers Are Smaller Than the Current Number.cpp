#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>temp;
        int n=nums.size();
        int cnt=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(nums[i]>nums[j]){
                    cnt++;
                }
            }

            temp.push_back(cnt);
            cnt=0;
        }

        return temp;
    }
};

int main()
{

}