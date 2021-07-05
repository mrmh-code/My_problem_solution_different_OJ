#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=1; i<=n; i++){
         cin>>a[i];
    }
    int e=0,o=0;
    for(int i=1; i<=n; i++){
        if(a[i]%2==0){
            e++;
        }
        else{
            o++;
        }
    }
 
    for(int i=1; i<=n; i++){
        if(o<e){
            if(a[i]%2==1){
                cout<<i<<endl;
                break;
            }
        }
     if(e<o){
            if(a[i]%2==0){
                cout<<i<<endl;
                break;
            }
        }
    }
}