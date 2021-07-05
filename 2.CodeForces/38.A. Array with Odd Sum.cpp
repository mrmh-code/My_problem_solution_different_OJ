#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n;
   
    while (n--)
    {
         cin>>m;
          int even=0;
        int odd=0;
         int A[m];
         for(int i=0; i<m; i++){
             cin>>A[i];
         }
        int sum=0;
         for(int i=0; i<m; i++){
             if(A[i]%2!=0 ||A[i]==1){
                 odd++;
             }else{
                 even++;
             }
             sum+=A[i];
         }
         if (sum%2!=0 || sum==1)
         {
             cout<<"YES"<<endl;
         }else{
            if (odd!=0 && even!=0)
            {
               cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
            
         }

    
    }
    
}