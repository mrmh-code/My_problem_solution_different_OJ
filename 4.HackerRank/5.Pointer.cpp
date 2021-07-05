#include <iostream>
using namespace std;

void addsub(int *a, int *b){
    int temp;
    if (*a>*b)
    {
        cout<<*a+*b<<endl;
        cout<<*a-*b<<endl;
    }else{
    temp=*a;
   *a=*b;
   *b=temp;
         cout<<*a+*b<<endl;
         cout<<*a-*b<<endl;

    }
 
  
   
        
}


int main()
{   int a,b,temp;
    cin>>a>>b;
    addsub(&a,&b);
}