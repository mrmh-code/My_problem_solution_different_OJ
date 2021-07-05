#include <bits/stdc++.h>
using namespace std;

int main()
{
     int t;
     cin>>t;
     while (t--)
     {
         int s1,s2,s3,s4;
         cin>>s1>>s2>>s3>>s4;
         int max1=max(s1,s2);
         int max2=max(s3,s4);
        int min1=min(s1,s2);
         int min2=min(s3,s4);
         int result1=min(max1,max2);
         int result2=max(min1,min2);
         if(result1>result2){
             cout<<"YES"<<endl;
         }else{
             cout<<"NO"<<endl;
         }
     }
     
}