#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int s=0;
    for(int i=0; i<n; i++){
        if (arr[i]!=0)
        {
 
           for(int j=i+1; j<n; j++){
               if (arr[i]==arr[j])
               {
                   s++;
                   arr[j]=0;
                   break;
               }       
           }
        }
        
    }

    cout<<s<<endl;
}