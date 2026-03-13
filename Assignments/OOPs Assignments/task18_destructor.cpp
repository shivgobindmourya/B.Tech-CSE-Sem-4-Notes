// Author: Shiv Gobind, Roll No. 241517
/*
   Program 18: 
   Demonstrating the destructor function that is automatically 
   called when an object goes out of scope.
*/

#include <iostream>

using namespace std;

class LifeCycle {
public:
    // Constructor
    LifeCycle() { 
        cout << "Object Created." << endl; 
    }
    
    // Destructor
    ~LifeCycle() { 
        cout << "Object Destroyed! Cleaning up resources..." << endl; 
    }
};

int main() {
    cout << "Entering block..." << endl;
    
    {
        // This object lives only inside these braces
        LifeCycle obj; 
        cout << "Object is currently active in memory." << endl;
    } // <--- obj is destroyed right here
    
    cout << "Exited block." << endl;
    
    return 0;
}