#include <iostream>
using namespace std;

void ArrayReverse(int A[], int n){
    for(int i=n-1; i>=0; i--){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n;
    cin>>n;
    int A[n];
   for(int i=0; i<n; i++){
       cin>>A[i];
   }
   ArrayReverse(A,n);
    
}