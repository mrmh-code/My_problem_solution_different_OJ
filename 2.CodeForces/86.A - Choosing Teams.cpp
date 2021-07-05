#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,m;
    cin>>n>>m;
    int s=0;
    while (n--)
    {
         int t;
         cin>>t;
         if(5-t>=m){
             s++;
         }
    }
    cout<<s/3<<endl;
    
}