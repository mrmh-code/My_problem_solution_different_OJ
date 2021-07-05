#include <iostream>
using namespace std;

int SherlockandSquares(int a, int b){

        int count=0;
                int i=1;
        while (i*i<a)
        {
           i++;
        }
        while (i*i<=b)
        {
             count++;
             i++;
        }
        return count;
}

int main()
{
   int n,a,b;
   cin>>n;
   for(int i=1; i<=n; i++){
       cin>>a>>b;
       cout<<SherlockandSquares(a,b)<<endl;
   }

   
  
}