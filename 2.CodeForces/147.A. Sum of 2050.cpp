#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while (t--)
    {
      long long int n;
        cin>>n;
        if(n%2050){
            cout<<"-1"<<endl;
        }else{
            n/=2050;
           long long int ans=0;
            while (n)
            {
              ans+=n%10;
              n/=10;
            }
              cout<<ans<<endl;            
        }
    }
    
}