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
         if(a==b){
             cout<<"0"<<endl;
         }
         else if(a>b){
             int result=a-b;
             if(result%2==0){
                 cout<<"1"<<endl;
             }else{
                 cout<<"2"<<endl;
             }
 
         }else if(b>a){
             int result2=b-a;
             if(result2%2==1){
                 cout<<"1"<<endl;
             }else{
                 cout<<"2"<<endl;
             }
         }
    }
    
}