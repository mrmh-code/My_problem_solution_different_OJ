#include <iostream>
using namespace std;

int main()
{
    int n,grade;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>grade;
        if (grade>=38)
        {
            if (grade%5<3)
            {
                cout<<grade<<endl;
            }else if (grade%5>2)
            {  
            
                cout<<grade+(5-(grade%5))<<endl;
            }
            
        }
        else{
            cout<<grade<<endl;
        }
        
    }

}