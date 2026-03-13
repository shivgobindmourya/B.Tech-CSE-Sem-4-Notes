// Author: Shiv Gobind, Roll No. 241517
/*
   Program 12: 
   Defining a default constructor to initialize class members 
   automatically when an object is created.
*/

#include <iostream>    
#include <vector>      
#include <algorithm>  
#include <cmath>       
#include <string>      
#include <map>
#include <chrono>
using namespace std;

class Car {
public:
    string brand;
    Car() { brand = "Generic"; }
};

int main() {
    Car c;
    cout << c.brand << endl;
    return 0;
}