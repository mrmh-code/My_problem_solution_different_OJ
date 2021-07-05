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
        int res=0;
        if(n<2){
            res=1;
        }
        for(int i=2; i<n; i++){
            if(n%i==0){
                res=1;
            }
        }
        if(res==1){
            cout<<"no"<<endl;
        }else{
            cout<<"yes"<<endl;
        }
    }
    
}