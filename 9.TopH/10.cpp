#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
 
int  main()
{

    string s,r;
    cin>>s;
    r=s;
     reverse(r.begin(),r.end());
     if(r==s){
         cout<<"Yes"<<endl;
     }
     else{
         cout<<"No"<<endl;
     }
    


       
    
    
 
}