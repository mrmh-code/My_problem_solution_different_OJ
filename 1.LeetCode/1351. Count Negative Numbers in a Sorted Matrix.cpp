#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countNegatives(vector<vector<int>> grid) {
        int count=0;

        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[i].size(); j++){
                if(grid[i][j]<0){
                    // cout<<grid[i][j]<<" "<<i<<" "<<j<<endl;
                    count++;
                }
            }
        }

        return count;
    }
};

int main()
{
    Solution st;
    vector<vector<int>> grid={{5,1,0},{-5,-5,-5}};
    cout<<st.countNegatives(grid)<<endl;
}