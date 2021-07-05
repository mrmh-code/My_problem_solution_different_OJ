#include <iostream>
#include <string.h>
using namespace std;
/************this Problem Link:https://www.hackerrank.com/challenges/camelcase/problem*/
int main()
{
    string s;
    cin>>s;
    int word=0;

    for(int i=0; i<s.size(); i++){
        if (isupper(s[i]))
        {
            word++;
        }
        
    }
    word++;
    cout<<word<<endl;
}