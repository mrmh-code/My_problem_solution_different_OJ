#include <iostream>
using namespace std;

int main()
{
    int i,n,k,mod;
    cin>>n>>k;
    for(i=0; i<k; i++){
    
      mod=n%10;
       if (mod==0)
       {
           n=n/10;
       }
       else{
           n--;
       }
                   
    }
           cout<<n<<endl;

 
}