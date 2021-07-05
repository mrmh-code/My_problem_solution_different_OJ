#include <bits/stdc++.h>
using  namespace std;
 
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
         int n;
         cin>>n;
         vector<int>v;
         for(int i=1; i<=n; i++){
             int a;
             cin>>a;
             v.push_back(a);
         }
         sort(v.begin(),v.end());
         int sz=unique(v.begin(),v.end())-v.begin();
         cout<<sz<<endl;
    }
    
}