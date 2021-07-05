#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {   int reminder,reverseNumber=0;
         int n;
         cin>>n;
         while (n!=0)
         {
            reminder=n%10;
            reverseNumber=reverseNumber*10+reminder;
            n=n/10;
         }
         cout<<reverseNumber<<endl;
    }
    
}