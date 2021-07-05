#include <iostream>
using namespace std;
long maxelement(long arr[],long n){
      long max=arr[0];
    for(int i=0; i<n; i++){
        if (arr[i]>max)
        {
            max=arr[i];
        }
        
    }
    return max;
     
}

long minElement(long arr[], long n){
    long min=arr[0];
    for(int i=0; i<n; i++){
        if (min>arr[i])
        {
           min=arr[i];
        }
        
    }
    return min;
}
int main()
{
    long n=5,minsum,maxsum,sum=0;
    long temp[n];
    for(int i=0; i<n; i++){
        cin>>temp[i];
    }
    for(int i=0; i<n; i++){
        sum+=temp[i];
    }
    int min=minElement(temp,n);
    int max=maxelement(temp,n);
    maxsum=sum-min;
    minsum=sum-max;
   
    cout<<minsum<<" "<<maxsum<<endl;
}