#include <bits/stdc++.h>
using namespace std;

int GCD(long long int a, long long int b){
    if(b==0){
        return a;
    }

    return GCD(b,a%b);

}


int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int ln=GCD(arr[0],arr[1]);
        for(int i=2; i<n; i++){
            ln=GCD(ln,arr[i]);
        }

       for(int i=0; i<n;  i++){
           cout<<arr[i]/ln<<" " ;
       }
       cout<<endl;
    }
    
}