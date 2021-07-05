class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string sub1;
        string sub2;
        string Ret;

        for(auto u:word1){sub1+=u;};
        for(auto u: word2){sub2+=u;};
        if(sub1==sub2){return true;};
        return false;
    }
};