#include <iostream>
#include <string.h>
#include <cctype>
using namespace std;


int main()
{
    int n,s=0;
    cin>>n;
    string str;
    
    for(int i=1; i<=n; i++){
        cin>>str;
  

    for(int i=0; i<str.size(); i++){
        if(isdigit(str[i]) || str[i]=='O'){
            s++;
        }
        
    }

    if(s<6){
        cout<<"3 BALLS"<<endl;
      
    }
    else if(s==6){
        cout<<"1 OVER"<<endl;

    }
    else if(s>=7){
        int res=s/6;
        int res2=s%6;
        cout<<res<<" OVER "<<res2<<" BALL"<<endl;
       
    }
     s=0;
      }
}