#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    int index=0;
    int cip=1;

    while (index<n)
    {
       cout<<s[index];
       index+=cip;
       cip++;
    }
    cout<<endl;
    
}