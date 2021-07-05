class Solution {
public:
    bool checkIfPangram(string sentence) {
        sort(sentence.begin(),sentence.end());
        int sz=unique(sentence.begin(),sentence.end())-sentence.begin();
        if(sz==26){
            return true;
        }
        return false;
    }
};