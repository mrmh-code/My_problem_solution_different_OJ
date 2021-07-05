#include <iostream>
using namespace std;

//problem Link:https://leetcode.com/problems/reverse-integer/
class Solution {
public:
    int reverse(int x) {
        int long res=0;
        int min=INT32_MIN;
        int max=__INT32_MAX__;
        while (x!=0)
        {
          res=res*10;
          res=res+x%10;
          x=x/10;//decremet Integer;
        }
        if (res>max || res<min)
        {
           res=0;
        }
        return res;
    }
};


//check My Think  program & bug output 
// int main()
// {
//     int n;
//     cin>>n;
//     int res=0;
//     while (n!=0)
//     {
//        res=res*10;
//        cout<<"firstres: "<<res;
//        res=res+n%10;
//        n=n/10;
//        cout<<" res:"<<res<<" n:"<<n<<endl;
//     }
//     // cout<<res<<endl;
    
// }