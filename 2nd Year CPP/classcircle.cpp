#include <iostream>
using namespace std;
class circle
{
    float radius;
    float pi=3.14;
    float area;
    public:
    void getdata()
    {
        cout<<"Enter radius:";
        cin>>radius;
    }
    void calcarea()
    {
        area=radius*radius*pi;
    }
    void displaydata()
    {
        cout<<"The area of the cirlce is:"<<area<<endl;
        
    }

};
int main()
{
   circle X;
   X.getdata();
   X.calcarea();
   X.displaydata();
   return 0; 
}
