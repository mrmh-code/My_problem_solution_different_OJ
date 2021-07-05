#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subtractProductAndSum(int n) {
    int mult=1;
    int sum=0;
    while (n!=0)
    {
        int rem=n%10;
        if(rem>0){
        mult*=rem;
        }
        sum+=rem;
        n=n/10;
    }

        int res=mult-sum;
        return res;

    }
 
};

int main()
{
   
 

  
    
}