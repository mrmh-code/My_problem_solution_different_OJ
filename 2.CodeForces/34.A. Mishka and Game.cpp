#include <iostream>
using namespace std;

int main()
{
    int n,mis,chi,m1=0,c2=0;
    cin>>n;    


    for(int i=0; i<n; i++){
    
        cin>>mis>>chi;
        if (mis>chi)
        {
            m1++;
        }
        if(mis<chi){
            c2++;
        }
        
    }

    if (m1>c2)
    {
        cout<<"Mishka"<<endl;
    }
    if (m1<c2)
    {
         cout<<"Chris"<<endl;
    }
    if (m1==c2)
    {
         cout<<"Friendship is magic!^^"<<endl;
    }
}

