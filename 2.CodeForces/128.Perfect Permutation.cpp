#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    if(n%2==1){
        cout<<-1<<endl;
        return 0;
    }   
        int a[n];
        for(int i=1; i<=n; i++){
            a[i]=i;
        }
       for(int i=1; i<=n; i+=2){
           cout<<a[i+1]<<" "<<a[i]<<" ";
       }
        
        cout <<endl;
        
    
    
}