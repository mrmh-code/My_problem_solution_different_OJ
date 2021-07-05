#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string a,b,result;
    cin>>a>>b;
    cout<<a.size()<<" "<<b.size()<<endl;
    result=a+b;
    cout<<result<<endl;

    swap(a[0],b[0]);
    cout<<a<<" "<<b<<endl;

}