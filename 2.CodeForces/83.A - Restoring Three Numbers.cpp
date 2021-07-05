#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int x1,x2,x3,x4;
    cin>>x1>>x2>>x3>>x4;
    int arr[4]={x1,x2,x3,x4};
    sort(arr,arr+4);
     cout<<arr[3]-arr[0]<<" "<<arr[3]-arr[1]<<" "<<arr[3]-arr[2]<<endl;
    
}