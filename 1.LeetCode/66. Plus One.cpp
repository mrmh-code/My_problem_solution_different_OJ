class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
            int len=digits.size()-1;
            for(int i=len; i>=0; i--){
                if(digits[i]==9){
                    digits[i]=0;
                }else{
            digits[i]++;
                break;
                }
            }
         if(digits[0] == 0)
        digits.insert(digits.begin(),1,1);
        return digits;
    }
};