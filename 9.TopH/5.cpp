#include <iostream>
using namespace std;

int main()
{
    int i,n;
    cin>>n;
    int num[n];
    double sum=0;
    double res;
    for(i=0; i<n;){
        cin>>num[i];
        sum+=num[i];
        i++;
        res=sum/i;
        cout<<res<<endl; 
       
    }
 
}