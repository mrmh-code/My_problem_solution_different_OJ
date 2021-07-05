#include <bits/stdc++.h>
using namespace std;


int main()
{
     int n;
    cin>>n;
    vector<pair<string,string>>p(n);
   
    for(int i=0; i<n; i++){
       cin>>p[i].first>>p[i].second;
    }

    sort(p.begin(),p.end());
    int sz=unique(p.begin(),p.end())-p.begin();
     cout<<sz<<endl;
}