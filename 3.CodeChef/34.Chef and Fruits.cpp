#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
       int n,m,k;
       cin>>n>>m>>k;
       int maxe=max(n,m);
       int mine=min(n,m);
        int res=maxe-min(maxe,mine+k);
        cout<<res<<endl;
    }
    
}