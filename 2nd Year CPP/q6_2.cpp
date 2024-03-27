#include <iostream>
using namespace std;
class Demo
{
    
    public:
    static int count;
    Demo()
    {
        count++;
    }
};
int Demo::count=0;
int main()
{
    Demo x,y,z;
    cout<<"The Number of Objects are:"<<Demo::count<<endl;
}