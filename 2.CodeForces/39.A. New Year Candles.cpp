#include <iostream>
using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
   int count=0;
   for(int i=1; i<=m; i++){ 
       if (i%n==0)
       {
           m++;//increment m ,change loop condition
       }
       
   }
   cout<<m<<endl;

    
}