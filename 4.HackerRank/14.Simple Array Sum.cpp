#include <iostream>
using namespace std;

int main()
{
    int n,s=0;
    cin>>n;
    int temp[n];
    for(int i=0; i<n; i++){
        cin>>temp[i];
    }
    for(int i=0; i<n; i++){
        s+=temp[i];
    }

    cout<<s<<endl;
}