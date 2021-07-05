#include <iostream>
using namespace std;

int main()
{
    int   arr[4];
    int n=4,s;
    for(int i=0; i<n; i++){
        cin>>s;
        arr[i]=s;
    }
    int count=0;
    for(int i=0; i<n; i++){
        if (arr[i]==arr[i+1]||arr[i]==arr[i+2]||arr[i]==arr[i+3])
        {
            count++;
        }
       
    }
    cout<<count<<endl;
}