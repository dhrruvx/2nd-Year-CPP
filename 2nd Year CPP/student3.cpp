#include <iostream>
using namespace std;
class Student
{
    int user_no;
    char Name[100];
    int Marks[3];
    //int BestMarks[2];
    float average=0;
    public:
    void readdata()
    {
        cout<<"ENter User Number:";
        cin>>user_no;
        cout<<"enter Student Name:";
        cin>>Name;
        cout<<"Enter the Marks:\n";
        for (int i = 0; i < 3; i++)
        {
            cout<<"Enter Marks For Test "<<i+1<<" :"<<endl;
            cin>>Marks[i];
        }
    }
    void calc_avg()
    {
        int BestMarks[2]={Marks[0],Marks[1]};
        if(Marks[2]>BestMarks[0])
        {
            BestMarks[0]=BestMarks[1];
            BestMarks[1]=Marks[2];
        }
        else if (Marks[2]> BestMarks[1])
        {
            BestMarks[1] = Marks[2];
        }
        average=(BestMarks[0]+BestMarks[1])/2;
    }
    void display()
    {   
        cout<<"Student Name is:"<<Name<<endl;
        cout<<"Student User Number is:"<<user_no<<endl;
        cout<<"Average of 2 subjects is:"<<average<<endl;
    }
};
int main()
{
    Student X[10];
    int n;
    cout << "How many students are there? ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        X[i].readdata();
       
    }
    for (int i = 0; i < n; i++)
    {
         X[i].calc_avg();
        X[i].display();
    }
    
}