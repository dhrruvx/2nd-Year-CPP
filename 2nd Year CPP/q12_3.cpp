#include <iostream>
using namespace std;

// Base class CONVERT
class CONVERT {
protected:
    double val1;
    double val2;

public:
    // Member function to get initial values
    void getinit() {
        cout << "Enter initial value 1: ";
        cin >> val1;
        cout << "Enter initial value 2: ";
        cin >> val2;
    }

    // Member function to get converted values
    void getconvert() const {
        cout << "Converted value 1: " << val1 << endl;
        cout << "Converted value 2: " << val2 << endl;
    }

    // Pure virtual function to be defined by derived classes
    virtual void compute() = 0;
};

// Derived class LIT_TO_GAL
class LIT_TO_GAL : public CONVERT {
public:
    // Implementation of compute() for lit_to_gal
    void compute()  {
        val1 = val1 / 3.78541; // Convert liters to gallons
        val2 = val2 / 3.78541;
    }
};

// Derived class FAR_TO_CEL
class FAR_TO_CEL : public CONVERT {
public:
    // Implementation of compute() for far_to_cel
    void compute() {
        val1 = (val1 - 32) * 5 / 9; // Convert Fahrenheit to Celsius
        val2 = (val2 - 32) * 5 / 9;
    }
};

int main() {
    int choice;
    cout << "Choose conversion type:" << endl;
    cout << "1. Liters to Gallons" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    CONVERT* converter;

    // Create an object based on user choice
    if (choice == 1) 
    {
        LIT_TO_GAL ob1;
        converter = &ob1;
    } 
    else if (choice == 2) 
    {
        FAR_TO_CEL ob2;
        converter = &ob2;
    } 
    else {
        cout << "Invalid choice." << endl;
        return 1;
    }

    // Get initial values from the user
    converter->getinit();

    // Perform the conversion
    converter->compute();

    // Display the converted values
    converter->getconvert();

    return 0;
}
