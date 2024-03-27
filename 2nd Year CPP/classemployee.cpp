#include <iostream>
using namespace std;
class Employee
{

    int Employee_num;
    char Employee_name[100];
    int Basicsal;
    int IT=0;
    int DA=0;
    int Net_sal=0;
    int gross_sal=0;
    public:
    void readdata()
    {
        cout<<"ENter employee  number:";
        cin>>Employee_num;
        cout<<"enter emplyee name:";
        cin>>Employee_name;
        cout<<"Enter basic salary:";
        cin>>Basicsal;
        
    }
    void calcsalary()
    {
        
        DA=(Basicsal*52)/100;
        gross_sal=DA+Basicsal;
        IT=(gross_sal*30)/100;
        Net_sal=gross_sal-IT;
    }
    void display()
    {
        cout<<"The employee name is:"<<Employee_name<<endl;
        cout<<"The employee num is:"<<Employee_num<<endl;
        cout<<"The basic salary is:"<<Basicsal<<endl;
        cout<<"The DA is:"<<DA<<endl;
        cout<<"The gross salary is:"<<gross_sal<<endl;
        cout<<"The IT is:"<<IT<<endl;
        cout<<"The net salary is:"<<Net_sal<<endl;
    }
};
int main()
{
    int i;
    Employee X[2];
        for (int i = 0; i < 2; i++)
        {
        X[i].readdata();
        X[i].calcsalary();
        X[i].display();
        }    
    return 0;
}
