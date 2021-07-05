#include <iostream>
#include <cstdio> 
using namespace std;

//using c++ template
// int max_of_value(int a, int b, int c, int d) {
//     int maxval=max(max(max(a,b),c),d);
//     return maxval;
// }

// int max_of_value(int a, int b, int c, int d){
//     int maxval=(a>b)?(a>c)?(a>d)?a:d:(c>d)?c:d:(b>c)?(b>d)?b:d:(c>d)?c:d;
//     return maxval;
// }

int max_of_value(int a, int b, int c, int d){
    if (a>b)
    {
        if (a>c)
        {
          if (a>d)
          {
            return a;
          }
          else{
              return d;
          }
        }

        else{
            if (c>d)
            {
               return c;
            }
            else{
                return d;
            }
            
        }
    }
    else{
        if (b>c)
        {
            if (b>d)
            {
              return b;
            }
            else
            {
                return d;
            }            
        }
        else{
            if (c>d)
            {
                return c;
            }else{
                return d;
            }
            
        }
    }
    
}
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
   cout<<max_of_value(a,b,c,d)<<endl;
}