// Author: Shiv Gobind, Roll No. 241517
/*
   Program 10: 
   Demonstrating how to access class members using a pointer 
   variable of the object's type.
*/

#include <iostream>    
#include <vector>      
#include <algorithm>  
#include <cmath>       
#include <string>      
#include <map>
#include <chrono>
using namespace std;

class Item {
public:
    void message() { cout << "Accessed via Pointer!" << endl; }
};

int main() {
    Item obj;
    Item *ptr = &obj;
    ptr->message();
    return 0;
}