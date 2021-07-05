#include <bits/stdc++.h>
using namespace std;
 
int main()
{
   long long  t;
    cin>>t;
    while (t--)
    {
       long long i=0,cnt=0,n;
       cin>>n;
       long long a[n];
 
       for(i=0; i<n; i++){
           cin>>a[i];
       }
       sort(a,a+n);
       for(i=0; i<n; i++){
           if(a[i+1]-a[i]<=1){
               cnt++;
           }
       }
        if(cnt==n-1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
 
        }
    }
    
}