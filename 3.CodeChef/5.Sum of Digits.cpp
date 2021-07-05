#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int s=0;
    while (t--)
    {   int n;
        cin>>n;
        while (n!=0)
        {
            int r=n%10;
            s=s+r;
            n=n/10;
        }
          cout<<s<<endl; 
          s=0; 
    }
    
}