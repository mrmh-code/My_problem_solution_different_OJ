#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int i;
 
    for(i=0; i<s.size(); i++){
        if (s[i]=='a'||s[i]=='o'||s[i]=='y'||s[i]=='e'||s[i]=='u'||s[i]=='i'||s[i]=='A'||s[i]=='O'||s[i]=='Y'||s[i]=='E'||s[i]=='U'||s[i]=='I')
        {
            continue;
        }
        printf(".%c",tolower(s[i]));
        
    }
    cout<<endl;
}