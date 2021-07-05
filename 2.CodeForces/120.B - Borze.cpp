#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string s1,s2;
    cin>>s1;
    for(int i=0; i<s1.size(); i++){
        if(s1[i]=='.'){
            s2+='0';
        }
       else if(s1[i]=='-' && s1[i+1]=='-'){
            s2+='2';
            i++;
        }   
 
        else if(s1[i]=='-' && s1[i+1]=='.'){
            s2+='1';
            i++;
        }
    }
    cout<<s2<<endl;
}