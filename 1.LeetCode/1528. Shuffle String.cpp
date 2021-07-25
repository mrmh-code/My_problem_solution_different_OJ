#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string restoreString(string s, vector<int> indices) {
        string shuffle=s;
        for(int i=0; i<indices.size(); i++){
            shuffle[indices[i]]=s[i];
        }

        return shuffle;
    }
};

int main()
{
    
}