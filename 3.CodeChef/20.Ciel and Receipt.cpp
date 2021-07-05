#include <bits/stdc++.h>
using namespace std;

int main(){
	 int a,j;

     int t;
     cin>>t;
     while (t--)
     {
          long n;
          cin>>n;
          j=n/2048;
          n=n%2048;
          while (n!=0)
          {
            
               j+=n%2;
               n/=2;
          }
          
            cout<<j<<endl;
     }
     
    
}