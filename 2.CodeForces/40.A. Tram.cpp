#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int s=0;
    int trammax=0;
    for(int i=0; i<n; i++){
        int m,l;
        cin>>m>>l;
        s-=m;
        s+=l;
        
        trammax=max(s,trammax);//max store trammax ,increment differenc trammax & s,please check here.
        // cout<<trammax<<endl;
    
    }
    cout<<trammax<<endl;
}