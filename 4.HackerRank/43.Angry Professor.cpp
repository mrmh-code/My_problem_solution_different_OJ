#include <iostream>
using namespace std;

void AngryProfessor(int n){
     int k,l;
    while (n--)
    {   cin>>k>>l;
        int temp;
        int s=0;
        for(int i=0; i<k; i++){
            cin>>temp;
            if (temp<=0)
            {
               s++;
            }
            
        }
        

        if (l<=s)
        {
           cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
        
    }
    
}

int main()
{   
    int n;
    cin>>n;
    AngryProfessor(n);
}