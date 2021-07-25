#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int t;
    cin>>t;
    while (t--)
    {
        long long  a,b,k,res,j;
    cin>>a>>b>>k;
     if(k%2){
        j=(k+1)/2;
        res=j*a-(k-j)*b;
        cout<<res<<endl;
     }else{
         j=k/2;
         res=j*a-j*b;
         cout<<res<<endl;
     }
    }
    
   
}