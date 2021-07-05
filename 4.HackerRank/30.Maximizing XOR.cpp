#include <iostream>
using namespace std;

int main()
{
    int l,b;
    cin>>l>>b;
    int max=0;
    for(int i=l; i<=b; i++){
        for(int j=l; j<=b; j++){
            int temp=(i^j);
            if (temp>max)
            {
               max=temp;
            }
            
        }
    }

    cout<<max<<endl;

}