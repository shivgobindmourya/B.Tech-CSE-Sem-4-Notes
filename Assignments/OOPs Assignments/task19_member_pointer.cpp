// Author: Shiv Gobind, Roll No. 241517
/*
   Program 19: 
   Accessing a member function of a class through a 
   pointer-to-member function variable.
*/

#include <iostream>
using namespace std;

class Demo {
public:
    void display() { cout << "Member function via pointer!" << endl; }
};

int main() {
    void (Demo::*ptr)() = &Demo::display;
    Demo d;
    (d.*ptr)();
    return 0;
}