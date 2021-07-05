#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long double a,b,c;
        cin>>a>>b>>c;
        const double x=50,y=0.7,z=5600;
        if(a>x && b<y && c>z){
            cout<<"10"<<endl;
        }
        else if(a>x && b<y){
            cout<<"9"<<endl;
        }else if(b<y && c>z){
            cout<<"8"<<endl;
        }
        else if(a>x && c>z){
            cout<<"7"<<endl;
        }
        else if(a>x || b<y || c>z){
            cout<<"6"<<endl;
        }else{
            cout<<"5"<<endl;
        }
    }
    
}