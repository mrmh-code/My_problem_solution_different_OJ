#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    int count=0,sum=0,temp=0;
    cin>>n;
    for(int i=1; sum<=n; i++){
        for(int j=1; j<=i; j++){
            sum+=j;
        }
         
        if(sum<=n){
            count++;
        }
 
    }
 
    cout<<count<<endl;
 
}