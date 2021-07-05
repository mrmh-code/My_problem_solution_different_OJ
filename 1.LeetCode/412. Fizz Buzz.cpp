#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>temp;
        for(int i=1; i<=n; i++){
            if(i%3==0 && i%5==0){
                temp.push_back("FizzBuzz");
            }else if(i%3==0){
                temp.push_back("Fizz");
            }
            else if(i%5==0){
                temp.push_back("Buzz");
            }else{
                temp.push_back(to_string(i));
            }
        }

        return temp;
    }
};

int main()
{

}