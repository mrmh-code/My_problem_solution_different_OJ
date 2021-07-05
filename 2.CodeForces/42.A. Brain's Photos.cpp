#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n;cin>>m;
    char temp[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>temp[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if (temp[i][j]=='C' || temp[i][j]=='M'||temp[i][j]=='Y'){
               cout<<"#Color"<<endl;
            return 0;
            }
        }
    }

    cout<<"#Black&White"<<endl;
    return 0;
}