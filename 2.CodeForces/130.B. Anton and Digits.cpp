#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k1,k2,k3,k4;
    cin>>k1>>k2>>k3>>k4;
    int min256=min(k1,min(k3,k4));
    int min32=min(k2, k1-min256);

    cout<<min256*256+min32*32<<endl;
}