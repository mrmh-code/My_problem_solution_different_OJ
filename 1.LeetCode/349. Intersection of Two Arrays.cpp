#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums2.begin(),nums2.end());
        
        vector<int>ret;
        for(auto u: nums1){
            if(binary_search(nums2.begin(),nums2.end(),u)){
                ret.push_back(u);
            }
        }
        sort(ret.begin(),ret.end());
        int sz=unique(ret.begin(),ret.end())-ret.begin();
        while(ret.size()>sz){
            ret.pop_back();
        }
        return ret;
    }
};

int main()
{

}