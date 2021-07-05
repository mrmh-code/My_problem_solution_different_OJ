#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int>s;
   int t;
   cin>>t;

   while (t--)
   {
        int type,x;
        cin>>type>>x;
        
        if(type==1){
            s.insert(x);
        }
        else if(type==2){
            s.erase(x);
        }else{
            if(s.count(x)==1){
                cout<<"Yes"<<endl;
            }else{
                cout<<"No"<<endl;
            }
        }
     }
   
    
}