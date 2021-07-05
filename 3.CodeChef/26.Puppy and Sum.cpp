#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        int a,b;
        cin>>a>>b;
        int ans=b;
        for(int i = 1; i<=a; i++){
            ans=ans*(ans+1)/2;
        }
        cout<<ans<<endl;
    }
    
}