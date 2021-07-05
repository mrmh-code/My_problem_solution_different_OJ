#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
     char first='a';
        int minimum=0;
         for(int i=0; i<s.size(); i++){
             int x=first-s[i];
             int y=s[i]-first;

             if(x<0){
                 x+=26;
             }
             if(y<0){
                 y+=26;
             }
             minimum+=min(x,y);
            // cout<<minimum<<endl; 
             first=s[i];
         }
         cout<<minimum<<endl;
 
    
}