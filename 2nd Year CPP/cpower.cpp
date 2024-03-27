#include <iostream>
#include <cmath>
using namespace std;
class C_POWER
    {
        
    public:
        int power(double,int);
        int power(int,int);
        double m;
        int n;
        void read()
        {
            cout<<"ENter the value of m:";
            cin>>m;
            cout<<"ENter the value of n:";
            cin>>n;
        }
    };
    int C_POWER::power(double m,int n=2)
        {
            double res=(pow(m,n));
            cout<<"THE ANSWER IS:"<<res;
        
        }
    int C_POWER::power(int m,int n)
        {
            int res=(pow(m,n));
            cout<<"THE ANSWER IS:"<<res;
        
        }
    
int main()
{   
    C_POWER obj1;
    obj1.read();
    if (obj1.n==2)
    {
        obj1.power(obj1.m);
    }
    else
        obj1.power(obj1.m,obj1.n);
    return 0;
    
}