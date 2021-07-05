#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int main()
{
    string s,m;
    cin>>s>>m;
    reverse(m.begin(),m.end());
    if (s==m)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    
}