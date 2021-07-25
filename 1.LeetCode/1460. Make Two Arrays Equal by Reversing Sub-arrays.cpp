#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        sort(arr.begin(),arr.end());
        sort(target.begin(),target.end());
        if(target==arr){
            return true;
        }else{
           return false;
        }
    }
};
int main()
{
    
}