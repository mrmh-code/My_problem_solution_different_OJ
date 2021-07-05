#include <iostream>
#include <string.h>
using namespace std;

class SampleClass{
    int age;
    char firstName[100];
    char lastName[100];
    int student;

    public:
        void print(int Age,const char *FirstName,const char *LastName,int Student){
            age=Age;
            strcpy(firstName,FirstName);
            strcpy(lastName,LastName);
            student=Student;
            cout<<age<<endl<<lastName<<", "<<firstName<<endl<<student<<endl<<endl;
            cout<<age<<","<<firstName<<","<<lastName<<","<<student<<endl;
        }
};

int main()
{
    SampleClass st;
    int Age;char FirstName[100],LastName[100];int student;
    cin>>Age>>FirstName>>LastName>>student;
     st.print(Age,FirstName,LastName,student);
}