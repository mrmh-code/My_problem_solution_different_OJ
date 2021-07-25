#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
             int count=0;
             int len=mat.size();
        for(int i=0; i<len; i++){
            for(int j=0; j<len; j++){
                if(i==j){
                    count+=mat[i][j];
                }

                if(i+j==len-1 &&i!=j){
                    count+=mat[i][j];
                }
            }
        } 

        return count;
    }
};

int main(){

}