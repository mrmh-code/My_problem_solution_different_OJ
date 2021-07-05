//problem link:https://leetcode.com/problems/valid-anagram/
#include <iostream>
#include <algorithm>
using namespace std;

//sorting easy problem  

class Solution {
public:
    bool isAnagram(string s, string t) {
        
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if (s==t)
        {
          return true;
        }else{
            return false;
        }
        
    }
};


//chechk here code
// int main()
// {
//     Solution st;
//     string a;string b;
//     cin>>a>>b;
//     if (st.isAnagram(a,b))
//     {
//         cout<<"true"<<endl;
//     }else{
//         cout<<"false"<<endl;
//     }
    
// }