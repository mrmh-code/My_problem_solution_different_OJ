#include <iostream>
using namespace std;

struct newType{
    int age;
    char firstName[100];
    char lastName[100];
    int student;
};

int main()
{
    newType st;
    cin>>st.age>>st.firstName>>st.lastName>>st.student;
    cout<<st.age<<" "<<st.firstName<<" "<<st.lastName<<" "<<st.student<<endl;
}