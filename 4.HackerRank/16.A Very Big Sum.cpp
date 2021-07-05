#include <iostream>
using namespace std;

int main()
{
    long n,sum=0;
    cin>>n;
    long temp[n];
    for(int i=0; i<n; i++)
    {
        cin>>temp[i];
    }
    for(int i=0; i<n; i++){
        sum+=temp[i];
    }
    cout<<sum<<endl;

}