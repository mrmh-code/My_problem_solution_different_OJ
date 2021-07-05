//Just LeetCode Solution .other can n't Compiling this code
//problem Link:https://leetcode.com/problems/two-sum/


class Solution {
public:
    vector<int> twoSum(vector<int> nums, int target) {
        //  target=nums[0]+nums[1];
        vector<int>vec;
        for(int i=0; i<nums.size()-1; i++){
            for(int j=i+1; j<nums.size(); j++){
                if (nums[i]+nums[j]==target)
                {
                   vec.push_back(i);
                   vec.push_back(j);
                   return vec;
                }
                
            }
        }
      return vec;
    }
};
