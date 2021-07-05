#include <iostream>
using namespace std;

int main()
{
    int n,k,i,s=0;
    cin>>n;
    for(i=0; i<n; i++){
        cin>>k;
        s=s+k;
    }

    if (s>=1)
    {
       cout<<"HARD"<<endl;
    }else{
        cout<<"EASY"<<endl;
    }
    
}