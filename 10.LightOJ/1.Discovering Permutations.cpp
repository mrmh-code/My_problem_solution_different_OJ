#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++){
        cout<<"Case "<<i<<":"<<endl;
        int  n,k,count=0;
        cin>>n>>k;
        char c='A';
        string s;
        for(int i=0; i<n; i++){
            s.push_back(c);
            c++;
        }
    do
    {
         cout<<s<<endl;
         count++;
         if(count==k){
             break;
         }
    } while (next_permutation(s.begin(),s.end()));
    
    }

}