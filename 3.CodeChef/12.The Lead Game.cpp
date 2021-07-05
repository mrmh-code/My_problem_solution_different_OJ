#include <bits/stdc++.h>
using namespace std;

int main()
{     int play1=0,play2=0,x=0,y=0,l=0,m=0;
    int t;
    cin>>t;
    while (t--)
    { 
        int a,b;
        cin>>a>>b;
        l=l+a;
        m=m+b;
        if(l>=m){
            x=l-m;
        }
        if(l<=m){
            y=m-l;
        }

        if(play1<x){
            play1=x;
        }
        if(play2<y){
            play2=y;
        }
    }
    
    if(play1>play2){
        cout<<"1 "<<play1<<endl;
    }
    if(play1<play2){
        cout<<"2 "<<play2<<endl;
    }
}