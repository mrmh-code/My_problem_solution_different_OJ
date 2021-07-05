#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,maxindex,minindex,maxvalue=INT_MIN,minvalue=INT_MAX;
    int n;
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]>maxvalue){
            maxvalue=a[i];
            maxindex=i;
        }
        if(a[i]<=minvalue){
            minvalue=a[i];
            minindex=i;
        }
    }

   int  result=maxindex+(n-1-minindex);
    if(minindex<maxindex)result--;
    cout<<result<<endl;
}