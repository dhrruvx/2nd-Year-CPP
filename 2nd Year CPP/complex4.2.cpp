#include<iostream>
using namespace std;
class Complex
{
    public:
    int a;
    int r;
    float i;
    
        void read_C()
        {
            cout<<"ENter the value of the real part of the Complex Number:  ";
            cin>>r;
            cout<<"\nEnter the Value of Imaginary Part:  ";
            cin>>i;
        }
        Complex add(int r,Complex b)
        {
            Complex temp;
            temp.r=r+b.r;
            temp.i=b.i;
            return temp;
        }
        Complex add(Complex c,Complex b)
        {
            Complex Temp;
            Temp.r=c.r+b.r;
            Temp.i=c.i+b.i;
            return Temp;
        }
        void display()
        {
            cout<<"The Results is:"<<r<<"+"<<i<<"i"<<endl;
        }
}; 
int main()
{
    Complex S1,S2,S3;
    S1.read_C();
    S2.read_C();
    S3=S3.add(S1,S2);
    S3.display();
    return 0;
}