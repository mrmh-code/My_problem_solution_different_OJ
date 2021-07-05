#include <iostream>
#include <math.h>
using namespace std;
int book(int n,int p){
     int totalpageofFront,targetcont,m;
   
    totalpageofFront=n/2;
    targetcont=p/2;
    int totalpage=totalpageofFront-targetcont;
    
    return min(targetcont,totalpage);

}
int main()
{
   int n,p;
   cin>>n>>p;
    cout<<book(n,p)<<endl;




}