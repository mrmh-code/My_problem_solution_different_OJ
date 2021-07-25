#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
            map<int,int>cnt;
            for(auto u: nums){
                cnt[u]++;
            }
            int s=0;
            for(auto u: cnt){
                if(u.second==1){
                    s+=u.first;
                }
            }

            return s;
        }

};

int main()
{

}