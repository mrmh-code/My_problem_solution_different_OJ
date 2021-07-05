#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    vector<string>v;
    string t;
    cin>>t;
    for(int i=0; i<5; i++){
        string s;
        cin>>s;
        v.push_back(s);
    }
    int ans=0;
    for(int i=0; i<v.size(); i++){
        for(int j=0; j<v[i].size(); j++){
            if(v[i][j]==t[1]||v[i][j]==t[0]){
                ans=1;
            }
         
        }     
    }
 
    if(ans==1){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}