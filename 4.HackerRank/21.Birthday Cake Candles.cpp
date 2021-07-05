#include <iostream>
#include <algorithm>
using namespace std;

int maxelement(int arr[],int n){
      long max=arr[0];
    for(int i=0; i<n; i++){
        if (arr[i]>max)
        {
            max=arr[i];
        }
        
    }
    return max;
     
}

int main()
{
    int n;
    cin>>n;
    int temp[n];
    for(int i=0; i<n; i++){
        cin>>temp[i];
    }
    int max=maxelement(temp,n);
    int s=0;
    for(int i=0; i<n; i++){
       if (max==temp[i])
       {
          s++;
       }
       
    }
    cout<<s<<endl;
 
}