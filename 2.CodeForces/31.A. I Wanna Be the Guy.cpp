#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int n,p1,p2,arr[250],count=0;
    cin>>n>>p1;
    for(int i=0; i<p1; i++){
        cin>>arr[i];
    }

    cin>>p2;
    for(int i=p1; i<p1+p2; i++)
    {
        cin>>arr[i];
    }
   sort(arr,arr+p1+p2);
   for(int i=0; i<p1+p2; i++){
     if(arr[i]!=arr[i+1]){
        count++;
     }
   }

   if(count==n){
       cout<<"I become the guy."<<endl;
   }else{
       cout<<"Oh, my keyboard!"<<endl;
   }
    
}