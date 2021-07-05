#include <bits/stdc++.h>
using namespace std;
 
int main()
{   const int ch=23,cm=60;
    int t;
    cin>>t;
    while (t--)
    {
        int h,m;
        cin>>h>>m;
        if(h==ch){
            cout<<cm-m<<endl;
        }else{
            int hD=(ch-h)*60;
            int HM=cm-m;
            cout<<hD+HM<<endl;
 
        }
    }
    
}