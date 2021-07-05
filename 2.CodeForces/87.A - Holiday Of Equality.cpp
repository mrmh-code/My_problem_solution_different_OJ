#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    vector<int>v;
    while (t--)
    {   int n;
        cin>>n;
        v.push_back(n);
    }
    int result=0;
    
   int maxEle=*max_element(v.begin(),v.end());
    for(int i=0; i<v.size(); i++){
        result+=v[i]-maxEle;
    }
 
    cout<<abs(result)<<endl;
}