class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int s=0;
        int maxr=INT_MIN;
        for(int i=0; i<accounts.size(); i++){
            for(int j=0; j<accounts[i].size(); j++){
                s+=accounts[i][j];
            }
            maxr=max(maxr,s);
            s=0;
        }

        return maxr;
    }
};