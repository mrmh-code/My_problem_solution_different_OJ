#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfSteps(int num) {
        int cnt=0;
        while (num)
        { 
             if(num%2==0) {
            num=num/2;
            cnt++;
            }
            else{
                num--;
                cnt++;
            }
        }
        return cnt;
    }
};

int main()
{
    Solution st;
    int n;
    cin>>n;
    cout<<st.numberOfSteps(n)<<endl;
}