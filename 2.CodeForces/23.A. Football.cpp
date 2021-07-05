#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s,f1,f2;
    cin>>s;
    f1="0000000";
    f2="1111111";
   if (s.find(f1)!= string::npos||s.find(f2)!= string::npos)
   {
       cout<<"YES"<<endl;
   }else{
       cout<<"NO"<<endl;
   }
   
    
}