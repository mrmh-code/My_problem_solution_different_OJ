#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{   
    string t="hello";
    string s;
    cin>>s;
    int j=0;
    int count=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]==t[j]){
            count++;
            j++;
        }
        if(count==5){
            break;
        }

    }
    if(count==5){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

}