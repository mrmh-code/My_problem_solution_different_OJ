#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>vec;
    while (n--)
    {   int val;
        cin>>val;
        vec.push_back(val);
        
    }
    int m;
    cin>>m;
    vec.erase(vec.begin()+m-1);

    int n1,n2;
    cin>>n1>>n2;
    vec.erase(vec.begin()+n1-1, vec.begin()+n2-1);
    int size;
    size=vec.size();
    cout<<size<<endl;
    for(int i=0; i<size; i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;

    
    

}