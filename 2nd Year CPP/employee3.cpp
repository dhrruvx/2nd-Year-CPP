#include <iostream>
using namespace std;
class Employee
{

    int Employee_num;
    char Employee_name[100];
    int gross_sal;
    public:
    void readdata()
    {
        cout<<"ENter employee  number:";
        cin>>Employee_num;
        cout<<"enter emplyee name:";
        cin>>Employee_name;
        cout<<"Gross salary:";
        cin>>gross_sal;
        
    }
    int getgross_sal()
    {
        return gross_sal;
    }
  void display()
    {
        cout<<"The employee name is:"<<Employee_name<<endl;
        cout<<"The employee num is:"<<Employee_num<<endl;
        cout<<"The gross salary is:"<<gross_sal<<endl;
    }
};
int main()
{
    int i;
    Employee X[10];
        int n;
        int highindex=0;
        int lowindex=0;
        cout<<"Enter the no of Employee ";
        cin>>n;
        for (int i = 0; i <n; i++)
        {
        cout<<"Enter the details for Employee "<<i+1<<": "<<endl;
        X[i].readdata();
        } 
        for (int i = 0; i <n; i++)
        {
            X[i].display();
        }
        int hig_sal=X[0].getgross_sal();
        int low_sal=X[0].getgross_sal();
        for (int i = 0; i <n; i++)
        {   
            int sal=X[i].getgross_sal();
            if (sal>hig_sal)
            {
                hig_sal=sal;
                highindex=i;
            }
            if (sal<low_sal)
            {
                low_sal=sal;
                lowindex=i;
            }
        }
        cout << "\nEmployee with the highest gross salary:\n";
        X[highindex].display();
        cout << "Employee with lowest gross salary\n:";
        X[lowindex].display();
        return 0;
}

