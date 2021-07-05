#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
using namespace std;

string Sherlock(vector<int>a){
    int n=a.size();
    int leftsum=0;
    int full_a_sum=0;
    int flag;

    for(int i=0; i<n; i++){
        full_a_sum+=a[i];
    }

for(int i=0; i<n; i++){
    full_a_sum-=a[i];
    if (leftsum==full_a_sum)
    {
        flag=1;
        return "YES";
    }
    leftsum+=a[i];
    
}
if (flag==0)
{   
    return "NO";
}

    return "No";
}

int  main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
    int m;
    cin >> m;
    vector<int> a(m);
    for(int a_i = 0; a_i < m; a_i++){
    cin >> a[a_i];
 }

 cout<<Sherlock(a)<<endl;}
}