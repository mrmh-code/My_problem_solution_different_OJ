#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
        int countWords(string list[], int n)
        {
          map<string,int>cnt;
          int i;
          for(i=0; i<n; i++){
              cnt[list[i]]++;
          }
          int s=0;
          for(auto u: cnt){
              if(u.second==2){
                  s++;
              }
          }
          
          return s;
        }

};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string list[n];
        for(int i=0;i<n;i++)
            cin>>list[i];
        Solution ob;    
        cout <<ob.countWords(list, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends