#include <bits/stdc++.h>
using namespace std;

int main()
{
    string A,B,C;
    cin>>A>>B>>C;
         string concat=A+B;
         sort(concat.begin(),concat.end());
        sort(C.begin(),C.end());
       
       
        if(concat==C){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
   
}