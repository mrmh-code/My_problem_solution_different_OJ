#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int>vec;
    int n,x; 
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x;
        vec.push_back(x);
    }
     sort(vec.begin(),vec.end());
    for (auto x : vec)
        cout << x << " ";
        //or using down loop
        // for(int i=0; i<n; i++){
    //     cout<<vec[i]<<" ";
    // }

         cout<<endl;
    
    
}