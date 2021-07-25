#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n*2];
        for(int i=0; i<n*2; i++){
            cin>>arr[i];
        }
        int flag=0;
        for(int i=0; i<n*2; i++){
            if(arr[i]%2==1){
                flag++;
            }
        }
        if(flag==n){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    
}
