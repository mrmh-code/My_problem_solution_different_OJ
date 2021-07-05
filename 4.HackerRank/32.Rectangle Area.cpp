#include <iostream>
using namespace std;
class Rectangle{
        public:
        int width;
        int height;
       
         void Display()
         {
             cout<<width<<" "<<height;
         }
    
};

class RectangleArea:public Rectangle{
    public:
        void read_input(){
            cin>>width>>height;
        }
        void display(){
            cout<<width*height<<endl;
        }
};
int main()
{
    
}