class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        int res=count;
    
        for(int i=0; i<s.size(); i++){
            if(s[i]!=' '){
                res=++count;
            }else{
                count=0;
            }
        }
        return res;
    }
   
};