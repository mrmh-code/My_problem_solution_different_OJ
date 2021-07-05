#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
         int n,remainder=0;
         cin>>n;
         int firstdigit=n%10;
         while (n!=0)
         {     remainder=n%10;
                n=n/10;
 
 
         }
         cout<<firstdigit+remainder<<endl;
         firstdigit=0;
         remainder=0;
         
    }
    
}