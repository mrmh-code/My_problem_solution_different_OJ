#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        
        vector<string>res;
        unordered_map<string,int>cnt;

        string word="";

        for(auto u: s1){
            if(u==' '){
                cnt[word]++;
                word="";
            }else{
                word+=u;
            }
        }
        cnt[word]++;
        word="";

        for(auto u: s2){
           if(u==' '){
                cnt[word]++;
                word="";
            }else{
                word+=u;
            }
        }
        cnt[word]++;

        for(auto u: cnt){
            if(u.second==1){
                res.push_back(u.first);
            }
        }

        return res;
    }
};

int main()
{

}