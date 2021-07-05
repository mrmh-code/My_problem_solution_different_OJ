#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
       string s;
       cin>>s;
       if(next_permutation(s.begin(),s.end())){
           cout<<s<<endl;
       }
       else{
           cout<<"no answer"<<endl;
       }
    }
    
}