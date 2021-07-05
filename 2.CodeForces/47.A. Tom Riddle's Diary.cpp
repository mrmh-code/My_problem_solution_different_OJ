#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    map<string,bool>vis;
    while (t--)
    {
        string s;
        cin>>s;
        if(vis[s]==1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

        vis[s]=1;
    }
    
}