#include <bits/stdc++.h>
using namespace std;

int sum(int n){
    int result=0;
    while (n!=0)
    {
       result+=n%10;
       n=n/10;
    }

    return result;
    
}

int main()
{
    int n;
    cin>>n;
 
    while (sum(n)%4!=0)
    {  
        n++;

    }
    cout<<n<<endl;
  
    
}