#include <iostream>
using namespace std;
 

int main()
{
   long long int i,n,ans;
    cin>>n;

    
        if (n%2==0)
        {
           ans=n/2;
        }
        if (n%2==1)
        {
          
            ans=(n-1)/2-n;
        }
        

        cout<<ans<<endl;
        
   
 
}