#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long int n;
        cin>>n;
        long long int a[n];
       long long  int b[n];
        for(long long int i=0; i<n; i++){
            cin>>a[i];
        }
        for(long long int i=0; i<n; i++){
            cin>>b[i];
        }
     long long  int minA=*min_element(a,a+n);
     long long  int minB=*min_element(b,b+n);
        long long  ans=0;
        for(long long  i=0; i<n; i++){
            ans+=max(a[i]-minA,b[i]-minB);
        }
        cout<<ans<<endl;
    }
    
}