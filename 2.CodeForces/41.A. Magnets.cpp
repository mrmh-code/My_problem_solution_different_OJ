#include <iostream>
using namespace std;

int main()
{
    int n,count=0;
    cin>>n;int temp[n];
   for(int i=0; i<n; i++){
       cin>>temp[i];
   }
   for(int i=0; i<n; i++){
       if (temp[i]!=temp[i+1])
        {
        //last index n+1 is grabage value don't match n index ,incremet extra count 1.
           count++;
       }
       
   }
     cout<<count<<endl;
    
}