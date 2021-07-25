#include <bits/stdc++.h>
using namespace std;

class Solution {
    long long DigitCount(long long n){
        int count=0;
        while (n!=0)
        {
           n=n/10;
           count++;
        }
        return count;
        
    };
public:
    int findNumbers(vector<int>& nums) {
        int countR=0;
        for(int i=0; i<nums.size(); i++){
            long long res=DigitCount(nums[i]);
            if(res%2==0){
                countR++;
            }
        }
        return countR;
    }

};

int main()
{

}