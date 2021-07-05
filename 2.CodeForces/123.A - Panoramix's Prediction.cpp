#include <bits/stdc++.h>
using namespace std;
 int isprime(int a){
      for(int i=2; i<a; i++){
        if(a%i==0){
         return  false;
        }
      }
      return true;
  }
int main()
{
 
 
  int a,b;
  cin>>a>>b;
  int count=0;
   if(isprime(a) && isprime(b)){
    for(int i=a; i<=b; i++){
      if(isprime(i)){
        count++;
      }
    }
    if(count==2){
      cout<<"YES"<<endl;
    }else{
      cout<<"NO"<<endl;
    }
   }else{
     cout<<"NO"<<endl;
   }
 
}