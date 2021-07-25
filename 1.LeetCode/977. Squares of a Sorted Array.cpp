#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>res;
        for(int i=0; i<nums.size(); i++){
            int tep=nums[i]*nums[i];
            int tep2=abs(tep);
            res.push_back(tep2);
        }
        sort(res.begin(),res.end());
        return res;
    }
};

int main()
{
    Solution st;
    vector<int>v={4,-1,0,3,10};
        st.sortedSquares(v);
        for(auto u: v){
            cout<<u;
        }
}