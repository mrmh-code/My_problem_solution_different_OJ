#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        string temp=s;
        reverse(s.begin(),s.end());
        if(temp==s){
            cout<<"wins"<<endl;
        }else{
            cout<<"loses"<<endl;
        }
    }
    
}