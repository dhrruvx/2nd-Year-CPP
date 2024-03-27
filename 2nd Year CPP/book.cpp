#include <iostream>
using namespace std;
class Book
{
    char Name[200];
    char Author[200];
    float price;
    double Isbn;
    public:
    void read()
    {
        cout<<"ENter Name of the Book:";
        cin>>Name;
        cout<<"enter Author name:";
        cin>>Author;
        cout<<"Enter the Price of the Book:";
        cin>>price;
        cout<<"Enter the ISBN Number of the Book:";
        cin>>Isbn;
    }
    int getisbn()
    {
        return Isbn;
    }
    void display()
    {
        cout<<"Name of the Book:"<<Name<<endl;
        cout<<"enter Author name:"<<Author<<endl;
        cout<<"The Price of the Book:"<<price<<endl;
    }
};
int main()
{
    Book X[5];
    int n;
    cout<<"ENter the the number of books:";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the Details Of Book"<<i+1<<": "<<endl;
        X[i].read();
    }
    int x;
    cout<<"ENter the ISBN Number to Be searched:";
    cin>>x;
    for (int i = 0; i < n; i++)
    {
        int s=X[i].getisbn();
        if(s==x)
        {
            cout<<"Book Found!!\n";
            X[i].display();
        }
        else
            continue;
    }
    

}