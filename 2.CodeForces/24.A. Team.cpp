#include <iostream>
using namespace std;

int main()
{
    int i,n,s=0,f1,f2,f3;
    cin>>n;
    for(i=0; i<n; i++){
        cin>>f1>>f2>>f3;
        if (f1+f2+f3>=2)
        {
           s++;
        }
        
    }

    cout<<s<<endl;
}