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
        int arr[n];
         int s=0;
         for(int i=0; i<n; i++){
             cin>>arr[i];
             s+=arr[i];
         }

         int result=(s+n-1)/n;
         cout<<result<<endl;
       
    }
    
}