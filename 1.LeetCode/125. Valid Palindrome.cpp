#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
       string temp;
    for(int i=0; i<s.size(); i++){
        if(isalpha(s[i]|| isdigit(s[i]))){
            continue;
        }else{
            temp.push_back(s[i]);
        }
    }

     transform(temp.begin(),temp.end(),temp.begin(), ::towlower);
    string temp2=temp;
    reverse(temp.begin(),temp.end());
    if(temp==temp2){
        return true;
    }else{
        return false;
    }

    }
};

int main()
{
 
   

}