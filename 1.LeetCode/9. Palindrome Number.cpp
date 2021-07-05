//problem Link:https://leetcode.com/problems/palindrome-number/

#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        long long n=x,reminder,reversedNumber=0;
        if (n<0)
        {
          return false;
        }
        
        while(n!=0){
            reminder=n%10;
            reversedNumber=reminder+reversedNumber*10;
            n=n/10;
        }
        if(reversedNumber==x){
            return true;
        }else{
           return  false;
        }
    }
};


//  check program compilaion
// int main()
// {
//     Solution st;
//     int n;
//     cin>>n;
//    if(st.isPalindrome(n)){
//        cout<<"true"<<endl;
//    }else{
//        cout<<"false"<<endl;
//    }
// }