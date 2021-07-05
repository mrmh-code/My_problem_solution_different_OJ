class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>cnt;
        for(auto u: nums){
            cnt[u]++;
        }
        int ans;
        for(auto u: cnt){
            if(u.second==1){
                ans=u.first;
            }
        }

        return ans;
    }
};