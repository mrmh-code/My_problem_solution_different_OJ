#include <bits/stdc++.h>
using namespace std;
bool isVowel(char c){
    return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
}
int main()
{
    string A,B,C;
    getline(cin,A);
    getline(cin,B);
    getline(cin,C);
    int a1=0,b1=0,c1=0;
    for(auto u: A){
        if(isVowel(u)){
            a1++;
        }
    }

     for(auto u: B){
        if(isVowel(u)){
            b1++;
        }
    }

     for(auto u: C){
        if(isVowel(u)){
            c1++;
        }
    }
    
    if(a1==5){
        if(b1==7){
            if(c1==5){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            cout<<"NO"<<endl;
        }
    }else{
        cout<<"NO"<<endl;
    }
}