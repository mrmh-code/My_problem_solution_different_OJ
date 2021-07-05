#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int x1,x2,x3,mindistance,maxdistance;
    cin>>x1>>x2>>x3;
    mindistance=(x1<x2)?(x1<x3)?x1:x3:(x2<x3)?x2:x3;
   maxdistance=max(max(x1,x2),x3);
    cout<<maxdistance-mindistance<<endl;
    
  
    
     
    
    
}