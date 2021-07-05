class Solution {
public:
    string toLowerCase(string s) {
        string temp;
        for(auto u: s){
           temp+=tolower(u);
        }
        return temp;
    }
};