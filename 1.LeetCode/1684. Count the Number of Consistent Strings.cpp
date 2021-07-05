class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int ans=0;
        for(auto u: words){
            if(u.find_first_not_of(allowed)==string::npos){
                ans++;
            }
        }
        return ans;
    }
};