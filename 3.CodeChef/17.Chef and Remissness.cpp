#include <bits/stdc++.h>
using namespace std;

#define endl "\n"


int main()
{
    int t;
    cin>>t;
    while (t--)
    {
         int a,b;
         cin>>a>>b;
         int result=a+b;
         int maxi=max(a,b);
         cout<<maxi<<" "<<result<<endl;
    }
    

}