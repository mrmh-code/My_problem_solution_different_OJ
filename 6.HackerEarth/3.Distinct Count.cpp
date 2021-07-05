#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
 
    while (t--)
    {  
        int N,X;
        cin>>N>>X;
         vector<int>v(N);
        for(int i=0; i<N; i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int sz= unique(v.begin(),v.end())-v.begin();
        if(sz==X){
            cout<<"Good"<<endl;
        }
        else if(sz<X){
            cout<<"Bad"<<endl;
        }else{
            cout<<"Average"<<endl;
        }
        
    }
    
}