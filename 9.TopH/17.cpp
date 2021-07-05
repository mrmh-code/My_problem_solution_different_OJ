#include <iostream>
using namespace std;

int main()
{
    int num1,num2,res,n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>num1>>num2;
        res=(num1+num2)/2;
        if(res%2==0){
            cout<<"Sadia will be happy."<<endl;
        }
        else{
            cout<<"Oops!"<<endl;
        }
    }
}