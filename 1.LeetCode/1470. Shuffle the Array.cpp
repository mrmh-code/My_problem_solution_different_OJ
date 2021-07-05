class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int len=nums.size();
        vector<int>x;
        vector<int>fi;
        for(int i=0; i<n; i++){
            x.push_back(nums[i]);
        }
        nums.erase(nums.begin(),nums.begin()+n);
        for(int i=0; i<len/2; i++){
            fi.push_back(x[i]);
            fi.push_back(nums[i]);
        }
        nums.clear();
        x.clear();

        return fi;
    }
};