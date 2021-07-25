#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>v;
        for(int i=0; i<2; i++){
            for(auto u: nums){
                v.push_back(u);
            }
        }
        return v;
    }
};

int main()
{

}