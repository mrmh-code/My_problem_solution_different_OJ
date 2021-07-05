#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reformatNumber(string number) {
        string v;
        for(int i=0; i<number.size(); i++){
            if(number[i]==' '|| number[i]=='-'){
                    continue;
            }else
                {
                    v.push_back(number[i]);
                }
        }
        for(int i=0; i<v.size(); i++){
            if(i%3==0){
                
            }
        }
        return v;
    }
};

int main()
{
    Solution st;
    string number;
    cin>>number;
     cout<<st.reformatNumber(number);
   
}