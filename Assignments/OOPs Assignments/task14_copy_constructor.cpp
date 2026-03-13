// Author: Shiv Gobind, Roll No. 241517
/*
   Program 14: 
   Demonstrating the copy constructor to initialize an 
   object using values from another existing object.
*/

#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string brand;
    string model;

    // 12. Default Constructor
    Car() {
        brand = "Unknown";
        model = "Generic";
    }

    // 13. Parameterized Constructor
    Car(string b, string m) {
        brand = b;
        model = m;
    }

    // 14. Copy Constructor
    Car(const Car &obj) {
        brand = obj.brand;
        model = obj.model;
        cout << "Copy constructor called!" << endl;
    }

    void display() {
        cout << brand << " " << model << endl;
    }
};

int main() {
    Car c1;               // Default
    Car c2("Tesla", "S"); // Parameterized
    Car c3 = c2;          // Copy

    c1.display();
    c2.display();
    c3.display();
    return 0;
}