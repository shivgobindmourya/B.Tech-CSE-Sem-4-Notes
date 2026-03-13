// Author: Shiv Gobind, Roll No. 241517
/*
   Program 11: 
   Using the 'this' pointer to return the current object for 
   implementing method chaining.
*/

#include <iostream>    
#include <vector>      
#include <algorithm>  
#include <cmath>       
#include <string>      
#include <map>
#include <chrono>
using namespace std;

class Calculator {
private:
    int value;
public:
    Calculator() : value(0) {}

    // Returns a reference to the current object
    Calculator& add(int n) {
        value += n;
        return *this; 
    }

    Calculator& multiply(int n) {
        value *= n;
        return *this;
    }

    void print() { cout << "Result: " << value << endl; }
};

int main() {
    Calculator calc;
    // Method Chaining
    calc.add(10).multiply(2).add(5).print();
    return 0;
}