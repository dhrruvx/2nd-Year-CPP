#include <iostream>
using namespace std;
class matrix
{
  private:long m[5][5];
  int row;int col;
  public:void getdata()
{
  cout<<"enter the number of rows\n";
  cin>>row;
  cout<<"enter the number of columns\n";
  cin>>col;
  cout<<"enter the elements of the matrix\n";
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
       cin>>m[i][j];
    }
  }
}
  int operator ==(matrix cm)
  {

  if(row==cm.row && col==cm.col)
  {
    return 1;
  }
    return 0;
  }
  matrix operator+(matrix am)
  {
    matrix temp;
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
      temp.m[i][j]=m[i][j]+am.m[i][j];
    }
    temp.row=row;
    temp.col=col;
  }
  return temp;
  }
  matrix operator-(matrix sm)
  {
    matrix temp;
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
      temp.m[i][j]=m[i][j]-sm.m[i][j];
    }   
    temp.row=row;
    temp.col=col;
  }
  return temp;
  }
  void display() const {
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                cout<<m[i][j] << ' ';
            }
            cout <<endl;
        }
    }
};
int main()
{
  matrix m1,m2,m3,m4;
  m1.getdata();
  m2.getdata();
  if(m1==m2)
  {
    m3=m1+m2;
    m4=m1-m2;
    cout<<"Addition of matrices\n";
    cout<<"the result is\n";
    m3.display();
    cout<<"subtraction of matrices\n";
    cout<<"The result is \n";
    m4.display();
  }
  else
  {
    cout<<"order of the input matrices is not identical\n";
  }
  return 0;
}