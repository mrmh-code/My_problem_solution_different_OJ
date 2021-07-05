#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        list<int>main;
        vector<int>v;
 
        for(int i=1; i<=n; i++){
            int a;
            cin>>a;
            main.push_back(a);
        }
        int flag=0;
       while(!main.empty()){
            if(flag==0){
                int x=main.front();
                v.push_back(x);
                 main.pop_front();
                flag=1;
            }else{
                int y=main.back();
                v.push_back(y);
                main.pop_back();
                flag=0;
            }
        }
 
        for(auto u: v){
            cout<<u<<" ";
        }
        cout<<endl;
    }
    
}