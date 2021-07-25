#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a1,a2,a3;
    cin>>a1>>a2>>a3;
    int b1,b2,b3;
    cin>>b1>>b2>>b3;
    int n;
    cin>>n;
    int res1=(a1+a2+a3+4)/5;
    int res2=(b1+b2+b3+9)/10;
    int sum=res1+res2;

    if(n<sum){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
}