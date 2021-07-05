class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int s=0,maxtemp=nums[0];
        for(int i=0; i<nums.size(); i++){
                s+=nums[i];
                maxtemp=max(maxtemp,s);
                if(s<0){
                    s=0;
                }

        }
        return maxtemp;
    }
};
