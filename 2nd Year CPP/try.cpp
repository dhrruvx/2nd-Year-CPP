#include<iostream>
using namespace std;

// Base class
class STUDENT {
protected:
    int roll_no;
    int reg_no;
public:
    // Constructor
    STUDENT() : roll_no(0), reg_no(0) {}

    // Member function to get input
    virtual void get_number() {
        cout << "Enter Roll Number: ";
        cin >> roll_no;
        cout << "Enter Registration Number: ";
        cin >> reg_no;
    }

    // Member function to display
    virtual void put_number() const {
        cout << "Roll Number: " << roll_no << endl;
        cout << "Registration Number: " << reg_no << endl;
    }
};

// Derived class TEST
class TEST : public STUDENT {
protected:
    int part1;
    int part2;
public:
    // Constructor
    TEST() : part1(0), part2(0) {}

    // Redefine get_number() for TEST class
    void get_number() override {
        STUDENT::get_number();
        cout << "Enter Part 1 marks: ";
        cin >> part1;
        cout << "Enter Part 2 marks: ";
        cin >> part2;
    }

    // Redefine put_number() for TEST class
    void put_number() const override {
        STUDENT::put_number();
        cout << "Part 1 marks: " << part1 << endl;
        cout << "Part 2 marks: " << part2 << endl;
    }
};

// Derived class SCORE
class SCORE : public STUDENT {
protected:
    int score;
public:
    // Constructor
    SCORE() : score(0) {}

    // Redefine get_number() for SCORE class
    void get_number() override {
        STUDENT::get_number();
        cout << "Enter Score: ";
        cin >> score;
    }

    // Redefine put_number() for SCORE class
    void put_number() const override {
        STUDENT::put_number();
        cout << "Score: " << score << endl;
    }
};

// Derived class RESULTS
class RESULTS : public TEST, public SCORE {
public:
    // Redefine display() to calculate total
    void display() const {
        put_number();  // Display student details
        int total = part1 + part2 + score;
        cout << "Total Marks: " << total << endl;
    }
};

int main() {
    RESULTS result;
    
    // User input
    result.get_number();

    // Display result
    result.display();

    return 0;
}
