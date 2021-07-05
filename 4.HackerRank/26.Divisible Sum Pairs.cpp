#include <iostream>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
     int count=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
           
            int sum=arr[i]+arr[j];
            if (sum%k==0)
            {
              count++;
            }
            
        }
    }

    cout<<count<<endl;
}