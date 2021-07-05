class Solution {
public:
    int isVowel(string str){
          int count=0;
        for(int i=0; i<str.size(); i++){
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||str[i]=='A' ||str[i]=='E' ||str[i]=='I' ||str[i]=='O' ||str[i]=='U'){
                count++;
            }
        }

        return count;
    }
    bool halvesAreAlike(string s) {
        string s1=s.substr(0,s.size()/2);
        string s2=s.substr(s.size()/2,s.size());

        if(isVowel(s1)==isVowel(s2)){
            return true;
        }

        return false;
    }
};