#include <iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int A[n];
    int toGift[n];
    for(i=1; i<=n; i++){
        cin>>A[i];
        toGift[A[i]]=i;

    }
    for(i=1; i<=n; i++){
        cout<<toGift[i]<<" ";
    }

    cout<<endl;

}