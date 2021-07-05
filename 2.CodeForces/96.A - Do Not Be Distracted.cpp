#include <bits/stdc++.h>
using namespace std;
 
int main()
{
     int t;
     cin>>t;
     while (t--)
     {
         int n;
         cin>>n;
         char arr[n];
         for(int i=0; i<n; i++){
            cin>>arr[i];
         }
         vector<char>v;
        for(int i=0; i<n; i++){
            if(arr[i]!=arr[i+1]){
                v.push_back(arr[i]);
            }
        }
        map<char,int>cnt;
        for(auto u: v){
            cnt[u]++;
        }
        int ans=0;
        for(auto u: cnt){
            if(u.second>1){
                ans=1;
            }
        }
 
        if(ans==1){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
     }
 
 
     
}