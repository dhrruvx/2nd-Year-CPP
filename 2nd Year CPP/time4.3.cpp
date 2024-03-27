#include <iostream>
using namespace std;
class Time
{
    float hr;
    int min;
    public:
            void read()
        {
            cout<<"Enter the Hours :";
            cin>>hr;
            cout<<"Enter the Minutes :";
            cin>>min;
        }
        void display()
        {
            cout<<"The Added time is :"<<hr<<"hours and "<<min<<"minutes "<<endl;
        }
        Time add(Time t1,Time t2)
        {
            Time temp;
            temp.hr=t1.hr+t2.hr;
            temp.min=t1.min+t2.min;
            if(temp.min>=60)
            {
                temp.hr+=temp.min/60;
                temp.min=temp.min % 60;
            }
            return temp;
        }
        Time add(Time t1,int a)
        {
            Time temp;
            temp.hr=t1.hr;
            temp.min=t1.min+a;
            if(temp.min>=60)
            {
                temp.hr=temp.min/60;
                temp.min=temp.min % 60;
            }
            return temp;
        }
};
int main()
{
    Time t1,t2,t3;
    t1.read();
    t2.read();
    t3=t3.add(t1,t2);
    t3.display();
    return 0;
}