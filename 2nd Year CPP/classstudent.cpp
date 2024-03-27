#include <iostream>
using namespace std;
class Student
{
    int Reg_no;
    char Name[100];
    int Marks[3];
    int total=0;
    float average=0;
    public:
    void readdata()
    {
        cout<<"ENter Registration Number:";
        cin>>Reg_no;
        cout<<"enter Student Name:";
        cin>>Name;
        cout<<"Enter the Marks:\n";
        for (int i = 0; i < 3; i++)
        {
            cout<<"Enter Marks For Subject "<<i+1<<" :"<<endl;
            cin>>Marks[i];
        }
        
    }
    void avg()
    {
        for (int i = 0; i < 3; i++)
        {
            total=total+Marks[i];
        }
        average=total/3;
        
    }
    void display()
    {   
        cout<<"Student Name is:"<<Name<<endl;
        cout<<"Student Registration Number is:"<<Reg_no<<endl;
        for (int i = 0; i < 3; i++)
        {
            cout<<"Marks For Subject "<<i+1<<" is :"<<Marks[i]<<endl;
        }
        cout<<"Total of 3 subjects is:"<<total<<endl;
        cout<<"Average of 3 subjects is:"<<average<<endl;
    }
};
int main()
{
    Student X;
    X.readdata();
    X.avg();
    X.display();
    return 0;
}