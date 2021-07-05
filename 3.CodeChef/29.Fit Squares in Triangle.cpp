#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
     int sqr,n;
    while (t--)
    {   
       sqr=0;
        cin>>n;
        while (n>2)
        {
           sqr+=(n-2)/2;
           n-=2;
        }
        cout<<sqr<<endl;

    }
    
}