#include <bits/stdc++.h>
using namespace std;

int main()
{   int n,m=0;
    cin>>n;
    string s,s2;
    char a1,a2;

    cin>>s;
    for(int i=0; i<n; i++){
        a1=s[i];
        a2=s[i+1];
        
        int count=0;
        for(int j=0; j<n; j++){
            if(s[j]==a1 && s[j+1]==a2){
                count++;
            }
        }

        if(m<count){
            s2=a1;
            s2+=a2;
            m=count;
        }

    }

    cout<<s2<<endl;

}