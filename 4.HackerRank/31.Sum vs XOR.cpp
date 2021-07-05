#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   long n;
    cin>>n;
    long count = 0;
    while(n){
     count += n%2?0:1;
     n/=2; 
}

    count=pow(2,count);
    cout<<count<<endl;
   
}