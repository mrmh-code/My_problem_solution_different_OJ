//problem Link:https://leetcode.com/problems/first-bad-version/

//Time Complexity O(log n).
//using Binary search algorithm.if you using linear search but time Complexity is lengthy.
class Solution {
public: 
    int firstBadVersion(int n) {
       long int left=1; //used signed Long type integer.if will com  a Runtime Error.
        long int right=n;
        long int mid;
        long int result=n;
        
        while(left<=right){
            mid=(left+right)/2;
            if (isBadVersion(mid))
            {
               result=mid;
                right=mid-1;
            }
           else{
                left=mid+1;
            }      
        }
            
        return result;
      

    }
};