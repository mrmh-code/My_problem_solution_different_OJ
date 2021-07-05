#include <iostream>
#include <vector>
using namespace std;

vector<int> LeftRotation(vector<int>&arr,int rotation){
    vector<int>LeftArrRotation;
    for(int i=rotation; i<arr.size(); i++){
        LeftArrRotation.push_back(arr[i]);
    }
    for(int i=0; i<rotation; i++){
        LeftArrRotation.push_back(arr[i]);
    }

    return LeftArrRotation;
}

int main()
{
    int size,rotation;
    cin>>size>>rotation;
    vector<int>arr(size);
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

  vector<int>result=LeftRotation(arr,rotation);
    for(int i=0; i<size; i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;
}