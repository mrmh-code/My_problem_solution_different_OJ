#include <iostream>
using namespace std;

int main()
{
    int n,i,p1,p2,cn=0;
    cin>>n;
    
    for(i=0; i<n; i++){
        cin>>p1>>p2;
        if (p2-p1>=2)
        {
          cn++;
        }
        
    }
    cout<<cn<<endl;
}