#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sumZero(int n) {
      vector<int>v;
      for(int i=0; i<n/2; i++){
          v.push_back(-(i+1));
          v.push_back(i+1);
      } 
      if(n%2==1){
          v.push_back(0);
      }

      return v;
    }
};

int main()
{

}