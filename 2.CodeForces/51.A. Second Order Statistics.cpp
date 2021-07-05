#include <bits/stdc++.h>
using namespace std;

int main()
{   set<int>m;
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int c;
        cin>>c;
        m.insert(c);
    }

    if(m.size()==1){
        cout<<"NO"<<endl;
    }else{
        cout<<*(++m.begin())<<endl;
    }


}