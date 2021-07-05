#include <iostream>
#include <map>
#include <algorithm>
#include <sstream>
using namespace std;



string maximumFrequency(string s);

int main()
{
    int t;cin>>t;
    cin.ignore();

    for(int i=0;i<t;i++)
    {

        string s;
        getline(cin,s);
        
        
        cout << maximumFrequency(s) << endl;

    }
    return 0;
}
// } Driver Code Ends


string maximumFrequency(string s){
        // Complete the function
        
      string temp;
      vector<string>v;
      
      for(auto u: s){
          if(isspace(u)){
              v.push_back(temp);
              temp.clear();
          }else{
              temp+=u;
          }
      }
      v.push_back(temp);
      
      map<string,int>cnt;
        int maxFriq=0;
      for(auto u: v){
          cnt[u]++;
          maxFriq=max(maxFriq,cnt[u]);
      }
      string ans;
      for(auto u: v){
          if(maxFriq==cnt[u]){
              ans=u;
              break;
          }
      }
      
    string m=to_string(maxFriq);
    string res=ans+" "+m;
    return res;
      
}

