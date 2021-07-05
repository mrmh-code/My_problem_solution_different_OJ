class Solution {
public:
    int climbStairs(int n) {
       int p1=1,p2=1,cur=1;
       for(int i=2; i<=n; i++){
           cur=p1+p2;
           p1=p2;
           p2=cur;
        }

        return  cur;
    }
};