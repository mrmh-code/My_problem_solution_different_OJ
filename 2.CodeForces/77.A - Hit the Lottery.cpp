#include <bits/stdc++.h>
using namespace std;
 
int main()
{   
    int n;
    cin>>n; 
    int ans = 0;
    int a[] = {100, 20, 10, 5, 1};
    for (auto x : a) {
        ans += n / x;
        n %= x;
    }
 
     cout<<ans<<endl;
}