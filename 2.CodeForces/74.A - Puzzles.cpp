#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,m;
    cin>>n>>m;
    n--;
    int a[m];
    for(int i=0; i<m; i++){
        cin>>a[i];
    }
 
    sort(a,a+m);
    vector<int>temp;
    for(int i=0; i+n<m; i++){
        temp.push_back(a[i+n]-a[i]);
    }
      
        sort(temp.begin(),temp.end());
    cout<<temp[0]<<endl;
    
 
}