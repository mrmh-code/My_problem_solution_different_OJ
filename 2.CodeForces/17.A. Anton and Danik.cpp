#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int n,i,s1=0,s2=0,s3=0;
    cin>>n;
    char s[n];
    cin>>s;
    for(i=0; i<n; i++){
        if (s[i]=='A')
        {
            s1++;
        }
        else if (s[i]=='D')
        {
            s2++;
        }
        
    }

    if (s1>s2)
    {
        cout<<"Anton"<<endl;
    }
    else if (s1<s2)
    {
        cout<<"Danik"<<endl;
    }

     if (s1==s2)
     {
          cout<<"Friendship"<<endl;
     }
     
    
}
