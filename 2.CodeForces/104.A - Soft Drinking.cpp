#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,k,l,c,d,p,n1,np;
    cin>>n>>k>>l>>c>>d>>p>>n1>>np;
    int r1,r2,r3;
    r1=(k*l)/n1;
    r2=c*d;
    r3=p/np;
    int maxi=min({r1,r2,r3});
    cout<<maxi/n<<endl;
 
}