#include <bits/stdc++.h>
using namespace std;

long long smallFactorial(int m){
    if(m==0){
        return 1;
    }else{
     
       double fact=1;
       for(int i=2; i<=m; i++){
           fact=fact*i;
       }
      return fact;
    }
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {   int m;
        cin>>m;
        cout<<smallFactorial(m)<<endl;
    }
    
}