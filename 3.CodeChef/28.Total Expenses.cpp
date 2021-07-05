#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
          double a,b;
        cin>>a>>b;
        if(a>1000){
            a=a*0.9;
        }
        printf("%.6lf\n",a*b);
    }
    
}