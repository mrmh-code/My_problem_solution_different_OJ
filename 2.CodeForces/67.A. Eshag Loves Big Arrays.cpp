#include <bits/stdc++.h>
using namespace std;

int main(){
 
 
	 int t;
     cin>>t;
     int ans;
     while (t--)
     {
          int n;
          cin>>n;
        ans=0;
          int mn=INT_MAX;
          int a[n];
          for(int i=1; i<=n; i++){
              cin>>a[i];
            mn=min(mn,a[i]);
          }
            for(int i=1; i<=n; i++){
                ans+=a[i]!=mn;
            }
       cout<<ans<<endl;
     }

     
     
}