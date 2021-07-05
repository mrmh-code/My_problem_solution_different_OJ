#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
      int a,b,c,n;
      cin>>a>>b>>c>>n;
      int sum=a+b+c+n;
      if(sum%3==0 and sum/3>=max({a,b,c})){
          cout<<"YES"<<endl;
      }else{
          cout<<"NO"<<endl;
      }
    }
    
    
}