// Author: Shiv Gobind, Roll No. 241517
/*
   Program 7: 
   Passing an object as a function argument to perform 
   addition of two complex numbers.
*/

#include <iostream>    
#include <vector>      
#include <algorithm>  
#include <cmath>       
#include <string>      
#include <map>
#include <chrono>
using namespace std;

class Complex {
public:
    int real, imag;
    void setData(int r, int i) { real = r; imag = i; }
    void add(Complex c) {
        real += c.real;
        imag += c.imag;
    }
    void display() { cout << real << " + " << imag << "i" << endl; }
};


int main() {
    Complex c1, c2;
    c1.setData(2, 3);
    c2.setData(4, 5);
    c1.add(c2);
    c1.display();
    return 0;
}