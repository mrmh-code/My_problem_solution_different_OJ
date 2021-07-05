#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        string res;
        for(int i=0; i<s.size(); i+=2){
            res+=s[i];
        }
        cout<<res<<endl;
 
    }
}