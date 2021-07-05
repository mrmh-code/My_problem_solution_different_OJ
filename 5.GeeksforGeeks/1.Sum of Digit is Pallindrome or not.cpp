// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {

     public:
    int isDigitSumPalindrome(int n) {
        int temp=0;
   while (n!=0)
   {    int x=n;
       x=x%10;
       n=n/10;
       temp=temp+x;
   }
   
    string s=to_string(temp);
    string tempstr=s;
    reverse(s.begin(),s.end());
    if(s==tempstr){
       return  true;
    }

    return false;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isDigitSumPalindrome(N) << "\n";
    }
}
  // } Driver Code Ends