#include <bits/stdc++.h>
using namespace std;

long long  factorial(long long  a){
    long long  s=1;
      for(long long  i=1; i<=a; i++){
        s*=i;
    }
    return s;
}

int main()
{
    long long  a,b;
    cin>>a>>b;
    
   if(a<b){
       cout<<factorial(a)<<endl;
   }else{
       cout<<factorial(b)<<endl;
   }
}