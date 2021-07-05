#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {   int x=0,y=0;
        int a,b;
        cin>>a>>b;
        string s;
        cin>>s;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='U' && y<b){
                y+=1;
            }
            if(s[i]=='D' && y>b){
                y=y-1;
            }
            if(s[i]=='R' && x<a){
                x+=1;
            }
            if(s[i]=='L' && x>a){
                x-=1;
            }
        }

        if(x==a && y==b){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    
}