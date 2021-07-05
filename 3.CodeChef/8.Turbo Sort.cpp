#include <bits/stdc++.h>
using namespace std;

int main()
{   vector<int>v;
    int t;
    cin>>t;
    while (t--)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }
    
}