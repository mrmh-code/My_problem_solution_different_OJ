#include <iostream>
using namespace std;

int main()
{
     string n;
    cin>>n;
    int i,s=0;
    for(i=0; i<n.size(); i++){
        if (n[i]=='4'|| n[i]=='7')
        {
            s++;
        }
        
    }
    
    if (s==4|| s==7)
    {
       cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    
}
