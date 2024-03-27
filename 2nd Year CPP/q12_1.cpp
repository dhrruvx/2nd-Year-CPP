#include <iostream>
using namespace std;
class Figure {
    protected: int l,b;
    public:
        virtual void area()=0;//pure virtual fucntion
};
class triangle:public Figure {
    protected: int ar1;
    public:      //Must redefine area()
        void area() {
            cout<<"Enter length and breadth for triangle"<<endl;
            cin>>l>>b;
            cout<<"The area of the triangle is :"<<0.5*l*b<<endl; }
};
class rectangle:public Figure{
protected: int ar2;
public:
    void area() {
    cout<<"Enter length and breadth for Rectangle:";
    cin>>l>>b;
    cout<<"\nThe Area of the Rectangle is:"<<l*b<<endl;  }  
};
int main() 
{
    Figure *ptr;
    triangle ob1;
    ptr=&ob1;
    ptr->area();
    rectangle ob2;
    ptr=&ob2;
    ptr->area(); 
}

