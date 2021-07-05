#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
       int a;
       cin>>a;
       if(a%10==0){
           cout<<"0"<<endl;
       }else if(a%5==0){
           cout<<"1"<<endl;
       }else{
           cout<<"-1"<<endl;
       }
    }
    
}