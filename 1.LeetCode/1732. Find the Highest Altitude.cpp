#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max=0;
        int temp=0;
        for(auto u: gain){
            temp+=u;
            if(temp>max){
                max=temp;
            }
        }      

        return max;
    }
};

int main()
{

}