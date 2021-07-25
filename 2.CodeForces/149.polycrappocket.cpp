#include <bits/stdc++.h>
using namespace std;

int main()
{
   vector<int>v(1001);
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        ++v[a];
    }
    cout<<*max_element(v.begin(),v.end())<<endl;


}