// Author: Shiv Gobind, Roll No. 241517
/*
   Program 20: 
   Defining and using a local class 'Temp' inside a 
   specific function scope.
*/

#include <iostream>
using namespace std;

void myFunction() {
    class Temp {
    public:
        void show() { cout << "I am a local class" << endl; }
    };
    Temp t;
    t.show();
}

int main() {
    myFunction();
    return 0;
}