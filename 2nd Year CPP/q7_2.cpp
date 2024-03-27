#include<iostream>
using namespace std;
class Twovalues
{
    int a,b;
    public:
        void read()
        {
            cout<<"Enter the value of a and b:";
            cin>>a>>b;

        }
        friend class Min_max;
};
class Min_max
{
    public:
        void calculate(Twovalues t)
        {
            int big,small;
            if(t.a>t.b)
            {
                big=t.a;
                small=t.b;
            }
            else
            {
               big=t.b;
               small=t.a; 
            }
            cout<<"\nMinimum Value is "<<small<<endl;
            cout<<"\nMaximum Value is "<<big<<endl;
        }
};
int main()
{
    Twovalues ob1;
    ob1.read();
    Min_max ob2;
    ob2.calculate(ob1);
    return 0;
}