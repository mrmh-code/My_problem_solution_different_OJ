#include <iostream>
using namespace std;

int main()
{
    int n=3,a1=0,b1=0;
    int a[n];
    int b[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

      for(int i=0; i<n; i++){
        cin>>b[i];
    }

    for(int i=0; i<n; i++){
        if (a[i]>b[i])
        {
           a1++;
        }
        if (a[i]<b[i])
        {
          b1++;
        }        
    }

    cout<<a1<<" "<<b1<<endl;
}