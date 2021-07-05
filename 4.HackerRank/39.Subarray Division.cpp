#include <iostream>
using namespace std;

int SubArray(int A[],int n, int d,int m){
    int count=0;
    for(int i=0; i<=n-m; ++i){
            int sumsubArray=0;
        for(int j=i; j<i+m; ++j){
            sumsubArray+=A[j];
        }
        if (sumsubArray==d)
        {
            count++;
        }
        
    }

    return count;
}

int main()
{
    int n,d,m;
    cin>>n;
    int temp[n];
    for(int i=0; i<n; i++){
        cin>>temp[i];
    }
    cin>>d>>m;
    cout<<SubArray(temp,n,d,m)<<endl;

}