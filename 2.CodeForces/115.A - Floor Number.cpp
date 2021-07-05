#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
         int a,b;
         cin>>a>>b;
         if(a<=2){
             cout<<1<<endl;
         }else{
            int res=(a-3)/b;
            cout<<res+2<<endl;
         }
    }
    
}