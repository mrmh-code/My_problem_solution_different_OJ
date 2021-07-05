#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int r,b,d;
        cin>>r>>b>>d;
        if(b<r)swap(b,r);
        int res=(b+r-1)/r;
        if(res-1<=d){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    
}