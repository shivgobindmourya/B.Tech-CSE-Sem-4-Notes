// Author: Shiv Gobind, Roll No. 241517
/*
   Program 1: 
   Demonstrating the difference in default access specifiers between 
   struct (public) and class (private).
*/

#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string name; // Public by default
};

class StudentClass
{
    string name; // Private by default
public:
    void setName(string n) { 
        name = n; 
    }

    void getName() { 
        cout << "Class Name: " << name << endl; 
    }
};

int main()
{
    Student s1;
    s1.name = "Alice"; // Direct access allowed

    StudentClass s2;
    // s2.name = "Bob"; // Error: Private member
    s2.setName("Bob");

    cout << "Struct Name: " << s1.name << endl;
    s2.getName();
    return 0;
}