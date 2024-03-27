#include <iostream>
using namespace std;
class Student
{
    protected:
        int usn;
        char Name[20];
        int age;
};
class Ugstudent:public Student
{
    int sem,fees,stipend;
    public:
        void read_UG()
        {
            cout<<"Enter the Name of the Student:";
            cin>>Name;
            cout<<"Enter the USN of the Student:";
            cin>>usn;
            cout<<"Enter the Age:";
            cin>>age;
            cout<<"Enter the Semester:";
            cin>>sem;
            cout<<"Enter the Fees:";
            cin>>fees;
            cout<<"Enter the Stipend:";
            cin>>stipend;

        }
        void display_UG()
        {
            cout<<usn<<"\t\t"<<Name<<"\t\t"<<age<<"\t\t"<<sem<<"\t\t"<<fees<<"\t\t"<<stipend<<endl;
        }
        int getsem()
        {
            return(sem);
        }
        int getage()
        {
            return(age);
        }
};
class Pgstudent:public Student
{
    int sem,fees,stipend;
    public:
        void read_PG()
        {
            cout<<"Enter the Name of the Student:";
            cin>>Name;
            cout<<"Enter the USN of the Student:";
            cin>>usn;
            cout<<"Enter the Age:";
            cin>>age;
            cout<<"Enter the Semester:";
            cin>>sem;
            cout<<"Enter the Fees:";
            cin>>fees;
            cout<<"Enter the Stipend:";
            cin>>stipend;

        }
        void display_PG()
        {
            cout<<usn<<"\t\t"<<Name<<"\t\t"<<age<<"\t\t"<<sem<<"\t\t"<<fees<<"\t\t"<<stipend<<endl;
        }
        int getsem()
        {
            return(sem);
        }
        int getage()
        {
            return(age);
        }
};
int main()
{
    Ugstudent A[5];
    Pgstudent B[5];
    int flag,age,sem,agesum=0,semcnt=0,i,j,m,n;
    cout<<"ENter the Number Of UG STUDENT DETAILS:";
    cin>>m;
    cout<<"ENter the Number Of PG STUDENT DETAILS:";
    cin>>n;
    cout<<"Enter the details of the UG STUDENT:\n";
    for(i=0;i<m;i++)
    {
        A[i].read_UG();
    }
    cout<<"Enter the details of the PG STUDENT:\n";
    for(i=0;i<n;i++)
    {
        B[i].read_PG();
    }
    cout<<"Details Of UG Students are:\n";
    cout<<"USN\t\t"<<"NAME\t\t"<<"AGE\t\t"<<"SEMESTER\t\t"<<"FEES\t\t"<<"STIPEND\t\t\n";
    for(i=0;i<m;i++)
    {
        A[i].display_UG();
    }
    for(i=0;i<=8;i++)
    {
        flag=0;
        for(j=0;j<m;j++)
        {
            sem=A[j].getsem();
            age=A[j].getage();
            if(i==sem)
            {
                agesum+=age;
                semcnt++;
                flag=1;
            }
            
        }
        if(flag)
            cout<<i<<"\t"<<agesum/semcnt;
    }
    cout<<"Details Of UG Students are:\n";
    cout<<"USN\t\t"<<"NAME\t\t"<<"AGE\t\t"<<"SEMESTER\t\t"<<"FEES\t\t"<<"STIPEND\t\t\n";
    for(i=0;i<n;i++)
    {
        B[i].display_PG();
    }
    for(i=0;i<=8;i++)
    {
        flag=0;
        for(j=0;j<n;j++)
        {
            sem=B[j].getsem();
            age=B[j].getage();
            if(i==sem)
            {
                agesum+=age;
                semcnt++;
                flag=1;
            }
            
        }
        if(flag)
            cout<<i<<"\t"<<agesum/semcnt;
    }
}
    