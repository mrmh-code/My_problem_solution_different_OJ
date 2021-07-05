#include <iostream>
using namespace std;
void BillDivision(int A[],int n,int t,int c){
        int i;int sum=0;
        for(i=0; i<n; i++){
            if (t==i)
            {
               continue;
            }else{
                sum+=A[i];
            }
        }
        int BActual=((sum)/2);
        int BCharged=c;
        if (BCharged<=BActual)
        {
           cout<<"Bon Appetit"<<endl;
        }else{
            cout<<BCharged-BActual<<endl;
        }
        
}
int main()
{
    int n,t,c;
    cin>>n>>t;
    int temp[n];
    for(int i=0; i<n; i++){
        cin>>temp[i];
    }
    cin>>c;
    BillDivision(temp,n,t,c);
}