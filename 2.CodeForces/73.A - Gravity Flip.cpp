#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    int a[t];
    for(int i=0; i<t; i++){
        cin>>a[i];
    }
 
    sort(a,a+t);
    for(auto u: a){
        cout<<u<<" ";
    }
    cout<<endl;
    
}