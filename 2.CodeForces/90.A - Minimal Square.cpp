#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,r1,r2;
        cin>>a>>b;
        r1=max(b*2,a);
        r2=max(a*2,b);
        int result=min(r1,r2);
        cout<<result*result<<endl;
      
    }
    
}