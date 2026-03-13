// Author: Shiv Gobind, Roll No. 241517
/*
   Program 13: 
   Using a parameterized constructor to pass initial values 
   at the time of object instantiation.
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
    string brand;
public:
    Car(string b) { brand = b; }
    void show() { cout << brand << endl; }
};

int main() {
    Car c("Tesla");
    c.show();
    return 0;
}