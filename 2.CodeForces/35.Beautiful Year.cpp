#include <iostream>
using namespace std;

int main()
{
    long int n;
     cin>>n;
  
  while (1)
  {      n++;
        int a,b,c,d;
         a=n/1000;
         b=(n/100)%10;
         c=(n/10)%10;
         d=n%10;
     if (a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
     {
       break;
     }
     
  }
cout<<n<<endl;    
    
}