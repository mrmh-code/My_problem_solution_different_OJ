#include <bits/stdc++.h>
using namespace std;

int main()
{   
    string s="23BBHHR";
    string s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    string temp=s1+s2+s3+s4;
    sort(temp.begin(),temp.end());
    if(s==temp){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}