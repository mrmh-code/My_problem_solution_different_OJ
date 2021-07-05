#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int count=0;
    while (t--)
    {   
         string s;
         cin>>s;
        if(s=="Tetrahedron"){
            count+=4;
        }
        if(s=="Cube"){
            count+=6;
        }
        if(s=="Octahedron"){
            count+=8;
        }
        if(s=="Dodecahedron"){
            count+=12;
        }

        if(s=="Icosahedron"){
            count+=20;
        }
    }

    cout<<count<<endl;
    
}