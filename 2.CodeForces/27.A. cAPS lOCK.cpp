#include <iostream>
#include <ctype.h>
using namespace std;

int main()
{
    string s;
     int i,c;
    cin>>s;
    c=0;
   for(i=0; i<s.size(); ++i){
       if (islower(s[i])==0)
       {
         c++;
       }
       
   }

   if (c==s.size()||(c==s.size()-1 && islower(s[0])))
   {
      for(i=0; i<s.size(); ++i){
          s[i]=tolower(s[i]);
          
      }
      if (s.size()-1==c)
          {
               s[0]=toupper(s[0]);
          }
   }
   
    cout<<s<<endl;
             
   

}