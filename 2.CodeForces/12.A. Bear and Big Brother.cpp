#include <iostream>
using namespace std;

int main()
{
    int A,B,M=0,S=0,R=0;
    cin>>A>>B;
    while (1)
    {
         M=A*3;
         S=B*2;
         R++;
         if (M>S)
         {
             cout<<R<<endl;
             break;

         }
     
        A=M;
        B=S;
        
    }
    
}
