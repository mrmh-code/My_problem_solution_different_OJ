#include <iostream>
#include <numeric>
using namespace std;

int main()
{
    int n,m;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>m;
        arr[i]=m;
    }
    int intiale_sum=0;
    double sum=accumulate(arr,arr+n,intiale_sum);
    double fraction=sum/n;
    cout<<fraction<<endl;
}