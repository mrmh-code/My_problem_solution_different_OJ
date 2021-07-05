#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int  main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,c;
        int temp=180;
        cin>>a>>b>>c;
        int result=a+b+c;
        if(result==temp){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    
}