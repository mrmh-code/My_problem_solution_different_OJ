#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>mp;
        for(auto u:arr){
            mp[u]++;
        }
        set<int>s;
        for(auto it:mp){
            s.insert(it.second);
        }
        if(s.size()==mp.size()){
            return true;
        }
        return false;
    }
};

int main()
{

}