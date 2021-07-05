#include <iostream>
#include <string.h>
using namespace std;

int main()
{       
    int count=0;
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++){
        if (s[i]==s[i+1])
        {
           count++;
        }
        
    }
    if (count>=7)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    


    
    
    
}