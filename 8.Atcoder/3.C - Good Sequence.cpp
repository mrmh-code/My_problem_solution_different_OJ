#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    map<int,int>cnt;
    for(auto u: v){
        cnt[u]++;
    }
    int ans=0;
    for(auto u: cnt){
        if(u.second>=u.first){
            ans+=u.second-u.first;
        }else{
            ans+=u.second;
        }
    }
    
    cout<<ans<<endl;
}