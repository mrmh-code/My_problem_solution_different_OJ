#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int one=0;
    int zero=0;
    for(auto u :s){
        if(u=='z'){
            zero++;
        }
        else if(u=='n'){
            one++;
        }
    }
    for(int i=0; i<one; i++){
        cout<<1<<" ";
    }
    for(auto i=0; i<zero; i++){
        cout<<0<<" ";
    }
    cout<<endl;
}