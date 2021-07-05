#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {   
    map<int,int>cnt;
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            v.push_back(a);
        }

        for(auto u:v){
            cnt[u]++;
        }
       int res=0;
        for(auto u: cnt){
            res=max(res,u.second);
        }
        cout<<res<<endl;
      
    }
    
}