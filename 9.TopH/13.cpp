#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
 char IsAnagram(string s,string n){
     int n1=s.size();
     int n2=n.size();
       sort(s.begin(),s.end());
    sort(n.begin(),n.end());

    for (int i = 0; i < n1; i++)
        if (s[i] != n[i])
            return false;
 
    return true;
   } 
int  main()
{
    string s,n;
    cin>>s>>n;
    
  
    
    if(IsAnagram(s,n)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

}