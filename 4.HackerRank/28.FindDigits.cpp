#include <iostream>
using namespace std;
int finddigit(int n){
    int s=0;
    int num=n;
     while (n>0)
    {
        if (n%10!=0 && num%(n%10)==0)
        {
            s++;
        }
        n=n/10;

    }
    return s;
}
int main()
{
    int m,n;
    cin>>m;
    for(int i=0;i<m; i++){
        cin>>n;
        cout<<finddigit(n)<<endl;
    }
   
   

}