#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxV=*max_element(candies.begin(),candies.end());
        vector<bool>res;

        for(int i=0; i<candies.size(); i++){
            if(candies[i]+extraCandies>=maxV){
                res.push_back(true);
            }else{
                res.push_back(false);
            }
        }

        return res;
    }
};



int main()
{
    
}