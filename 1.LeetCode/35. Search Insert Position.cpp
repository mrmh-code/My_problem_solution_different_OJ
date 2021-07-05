class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ln=nums.size();
       for(int i=0; i<ln; i++){
           if(nums[i]==target){
               return i;
           }
            else if(nums[ln-1]<target){
                   return ln;
               }
            else if(nums[i]<target && nums[i+1]>target){
                return i+1;
            }
        
       } 
        return 0;
    }
    
};