#include <iostream>
#include <ctype.h>
#include<string.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int i;
    int upr=0;
    int lor=0;
    for(i=0; i<s.size(); i++){
        if (s[i]>=65 && s[i]<=90)
        {
            upr++;
        }  
        else{
            lor++;
        }
        
    }
 
    if (upr<lor)
    {   char ch;
        for(i=0; i<s.size(); i++){
            ch=tolower(s[i]);
            cout<<ch;;
        }

        cout<<endl;
    }
    else if (upr>lor)
    {
          char ch;
        for(i=0; i<s.size(); i++){
             ch=toupper(s[i]);
             cout<<ch;
        }

        cout<<endl;
    }
    
    else{
       char ch;
        for(i=0; i<s.size(); i++){
            ch=tolower(s[i]);
            cout<<ch;;
        }

        cout<<endl;
    }
    

    
}