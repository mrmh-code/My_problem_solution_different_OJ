#include <bits/stdc++.h>
using namespace std;

int main()
{
    int d1,d2,d3;
    cin>>d1>>d2>>d3;
   
    int ans1=d1*2+d2*2;
    int ans2=d1+d2+d3;
    int ans3=d1*2+d3*2;
    int ans4=d2*2+d3*2;

    cout<<min(min(ans1,ans2),min(ans3,ans4))<<endl;
}