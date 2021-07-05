#include <iostream>
using namespace std;

int main()
{
    int n,BW,HW,i,s1=0,s2=0;
    cin>>n>>BW;

    for(i=0; i<n; i++){
        cin>>HW;
        if (BW>=HW)
        {
            s1++;
        }
         if (HW>BW)
        {
            s2=s2+2;
        }
    }
    cout<<s1+s2<<endl;

}