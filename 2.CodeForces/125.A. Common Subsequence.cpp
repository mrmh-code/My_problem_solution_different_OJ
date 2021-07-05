#include <bits/stdc++.h>
using namespace std;

int main()
{     
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        int arr[n];
        int brr[m];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        for(int i=0; i<m; i++){
            cin>>brr[i];
        }
        int temp;
        int flag=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(arr[i]==brr[j]){
                    temp=arr[i];
                    flag=1;
                    break;
                }
            }

            if(flag==1){
                break;
            }
        }

        if(flag==1){
            cout<<"YES\n1 "<<temp<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

 
}