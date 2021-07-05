class Solution {
public:
    string truncateSentence(string s, int k) {
        int count=0;
        string temp;
       
        for(int i=0; i<s.size(); i++){
            if(isspace(s[i])){
                count++;
            }
            
            temp.push_back(s[i]);
            if(k==count){
                break;
            }
        }
         int len=temp.size();
            if(isspace(s[len-1])){
                temp.pop_back();
            }
        return temp;
    }
};