#include<iostream>
using namespace std;
class STUDENT {
  protected:
    int roll_no;
    int reg_no;

  public:
    virtual void get_number() {
      cout << "Enter the roll number: ";
      cin >> roll_no;
      cout << "Enter the register number: ";
      cin >> reg_no;
    }

    virtual void put_number() {
      cout << "Roll number: " << roll_no << endl;
      cout << "Register number: " << reg_no << endl;
    }
}; 
class TEST : public STUDENT {
  protected:
    int part1;
    int part2;

  public:
    void get_number() {
      STUDENT::get_number();
      cout << "Enter the marks for part 1: ";
      cin >> part1;
      cout << "Enter the marks for part 2: ";
      cin >> part2;
    }

    void put_number() {
      STUDENT::put_number();
      cout << "Marks for part 1: " << part1 << endl;
      cout << "Marks for part 2: " << part2 << endl;
    }
};
class SCORE : public STUDENT {
  protected:
    int score;

  public:
    void get_number() {
      STUDENT::get_number();
      cout << "Enter the score: ";
      cin >> score;
    }

    void put_number() {
      STUDENT::put_number();
      cout << "Score: " << score << endl;
    }
};
class RESULT : public TEST, public SCORE {
  public:
    int total;

    void put_number() {
        put_number();
      total = part1 + part2 + score;
      cout << "Total: " << total << endl;
    }
}; 
int main()
{
    RESULT result;
    result.get_number();
    result.put_number();
    //result.display();
    return 0;
}