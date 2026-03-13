// Author: Shiv Gobind, Roll No. 241517
/*
   Program 16: 
   Using default arguments in a constructor to provide 
   flexibility during object creation.
*/

#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    Student(string n = "Unknown", int a = 0) {
        cout << n << " is " << a << " years old." << endl;
    }
};

int main() {
    Student s1("Mark", 21);
    Student s2;
    return 0;
}