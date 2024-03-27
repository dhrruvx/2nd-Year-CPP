#include <iostream>
using namespace std;
class myclass
{
    int a,b;
public:
    myclass(){}
    myclass(int x,int y)
    {    a=x;b=y;   }
    void display()
    {   cout<<"A= "<<a<<"B= "<<b<<endl;  }
    friend myclass operator+(int,myclass);
    friend myclass operator+(myclass,int);
};
myclass operator+(myclass o1,int p)
{
    myclass temp;
    temp.a=p+o1.a;
    temp.b=p+o1.b;
    return temp;
}
myclass operator+(int p,myclass o2)
{
    myclass temp;
    temp.a=p+o2.a;
    temp.b=p+o2.b;
    return temp;
}
int main()
{
    myclass C1(10,20);
    myclass C2(30,40);
    myclass C3,C4;
    C3=C1+10;
    C4=10+C2;
    C3.display();
    C4.display();
    return 0;
}

