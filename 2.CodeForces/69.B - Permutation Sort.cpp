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
       int a[n];
       for(int i=0; i<n; i++){
           cin>>a[i];
       }
        int res=2;
       if(is_sorted(a,a+n)){
           res=0;
       }
       else if(a[0]==1 ||a[n-1]==n){
           res=1;
       }
       else if(a[0] == n && a[n - 1] == 1){
           res=3;
       }
       cout<<res<<endl;
 
    }
    
}