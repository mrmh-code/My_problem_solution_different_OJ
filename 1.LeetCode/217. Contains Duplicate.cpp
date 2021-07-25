#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
      set<int>s;
      for(auto u: nums){
          s.insert(u);
      }
    int sizeset=s.size();
    int sizeVector=nums.size();

    if(sizeset==sizeVector){
        return false;
    }else{
        return true;
    }
    }
};


int main()
{

}