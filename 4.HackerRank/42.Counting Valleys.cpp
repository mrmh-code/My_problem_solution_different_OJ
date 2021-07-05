#include <iostream>
using namespace std;

int CountingValleys(char A[], int n){
    int lb=0;
    int s=0;
    int d=0;
    for(int i=0; i<n; i++){
        if (A[i]=='U')s++;
        else{
            if(s==0)d++;
            s--;
        }
      
    }
    if (s<0)
    {
       d--;
    }
    
    return d;  
}
int  main()
{
    int n;
    cin>>n;
    char A[n];
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
   cout<<CountingValleys(A,n)<<endl;
}