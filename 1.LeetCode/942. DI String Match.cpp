#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> diStringMatch(string s) {
        int c=0,ln=s.size();
        vector<int>v;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='I'){
                v.push_back(c++);
            }else{
                v.push_back(ln--);
            }
        }

        if(s.size()-1=='I'){
            v.push_back(c++);
        }else{
            v.push_back(ln--);
        }

        return v;
    }
};

int main()
{

}