#include <iostream>
using namespace std;

int main()
{
    int n;
    double s1=0.00,s2=0.00,s3=0.00;
    cin>>n;
    int temp[n];

    for(int i=0; i<n; i++){
        cin>>temp[i];
    }
    for(int i=0; i<n; i++){
        if (temp[i]>0)
        {
            s1++;
        }
        if (temp[i]<0)
        {
             s2++;
        }
        if (temp[i]==0)
        {
           s3++;
        }
    
    }

    double res1,res2,res3;
    res1=s1/n;
    res2=s2/n;
    res3=s3/n;
   printf("%.6lf\n%.6lf\n%.6lf\n",res1,res2,res3);
}