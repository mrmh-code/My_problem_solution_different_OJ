#include <bits/stdc++.h>
using namespace std;
int GCD(int n1,int n2){
    int reminder;
    int gcd;
    while(n2!=0){
        reminder=n1%n2;
        n1=n2;
        n2=reminder;
    }

    gcd=n1;
    return gcd;
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
       int n;
       cin>>n;
       int m=100-n;
       int k=GCD(n,m);
       n/=k;
       m/=k;
       cout<<n+m<<endl;

    }
    
}