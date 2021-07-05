#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int s=0,d=0,c1=1;
    for(int i=0; i<n; i++){
        if(c1==1){
        if(v[0]<v.back()){
            s=s+v.back();
            v.pop_back();
        }
        else{
            s=s+v[0];
            v.erase(v.begin());
        }
        c1=2;
        }

    else{
        if(v[0]<v.back()){
            d=d+v.back();
            v.pop_back();
        }else{
            d=d+v[0];
            v.erase(v.begin());
        }
            c1=1;
    }

    }


    cout<<s<<" "<<d<<endl;

    
}