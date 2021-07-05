#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string a;
        cin>>a;
        int ln=a.size();
        string b;
        b+=a[0];
        for(int  i=1; i<ln-1; i+=2){
            b+=a[i];
        }
        b+=a[ln-1];
        cout<<b<<endl;
 
 
       
    }
    
}