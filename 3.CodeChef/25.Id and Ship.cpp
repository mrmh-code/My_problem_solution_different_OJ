#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        char s;
        cin>>s;
        if(s=='b'||s=='B'){
            cout<<"BattleShip"<<endl;
        }

        if(s=='c'|| s=='C'){
            cout<<"Cruiser"<<endl;
        }
        if(s=='D'|| s=='d'){
            cout<<"Destroyer"<<endl;
        }
        if(s=='f'||s=='F'){
            cout<<"Frigate"<<endl;
        }
    }
    
}