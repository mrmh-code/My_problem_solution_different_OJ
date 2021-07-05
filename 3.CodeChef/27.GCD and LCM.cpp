#include <bits/stdc++.h>
using namespace std;
long long int GCD(long long int a, long long int b){

  if(b==0){
        return a;
  }

  return GCD(b,a%b);
    
};

 long long int LCM(long long int a,long long int b){
     return (a*b)/GCD(a,b);
 }

 
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        cout<<GCD(a,b)<<" "<<LCM(a,b)<<endl;
    }
    
}