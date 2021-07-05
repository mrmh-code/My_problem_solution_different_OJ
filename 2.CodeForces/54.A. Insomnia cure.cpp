#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,e;
    int count=0;
    cin>>a>>b>>c>>d>>e;
    if(a==1||b==1||c==1||d==1){
        cout<<e<<endl;
    }else{
        for(int i=1; i<=e; i++){
            if(i%a==0 || i%b==0||i%c==0|| i%d==0){
                count++;
            }
        }
         cout<<count<<endl;
    }
   
}