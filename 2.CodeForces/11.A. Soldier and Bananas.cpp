#include <iostream>
using namespace std;

int main()
{
    int i,k,n,w,sum=0,result;
    cin>>k>>n>>w;
    for(i=1; i<=w; i++){
        sum+=(i*k);
    }

    result=sum-n;
    if (sum<=n)
    {
       cout<<"0"<<endl;
    }
    else{
          cout<<result<<endl;
    }
  
}