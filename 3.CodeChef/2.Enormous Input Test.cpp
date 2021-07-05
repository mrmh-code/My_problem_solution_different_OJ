#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,t;
    cin>>x>>y;
    int count=0 ;
    for(int i=0; i<x; i++){
        cin>>t;
        if(t%y==0){
            count++;
        }

    }
    cout<<count<<endl;
}