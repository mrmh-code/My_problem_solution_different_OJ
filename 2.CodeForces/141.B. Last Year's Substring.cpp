#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
       int n;
       cin>>n;
       string s;
       cin>>s;
    int flag=0;
       for(int i=0; i<=4; i++){
            if(s.substr(0,i)+s.substr(n-4+i,4-i)=="2020"){
                flag=1;
            }
       }
    if(flag==1){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
        
    }
    
}