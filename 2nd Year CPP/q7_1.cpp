#include<iostream>
using namespace std;
class DB;//forward declaration
class DM
{
    int meter,centimeter;
    public:
        void accept()
        {
            cout<<"\n\n Enter meter and centimeter: ";
            cin>>meter>>centimeter;
        }

        void display()
        {
           cout<<"\n\n Meter: "<<meter;
           cout<<"\n Centimeter: "<<centimeter;
        }

        friend void add(DB,DM);
};

class DB
{
    int feet,inches;
    public:
        void accept()
        {
            cout<<"\n\n Enter feet and inches: ";
            cin>>feet>>inches;
        }

        void display()
        {
           cout<<"\n\n Feet: "<<feet;
           cout<<"\n Inches: "<<inches;
        }

        friend void add(DB,DM);
};

void add(DB d1,DM d2)
{
    DM d;
    int c=(d2.meter*100+d2.centimeter+d1.feet*30.48+d1.inches*2.54);
    //d(cm) = d(ft) × 30.48 + d(in) × 2.54

    if(c>=100)
    {
        d.meter=c/100;
        d.centimeter=c%100;
    }
    else
    {
        d.meter=0;
        d.centimeter=c;
    }
    d.display();
}

int main()
{
    DB d1;
    DM d2;

    d1.accept();
    d2.accept();

    d1.display();
    d2.display();

    cout<<"\n\n Addition of Meter-Centimeter";
    add(d1,d2);

    return 0;
}