// Author: Shiv Gobind, Roll No. 241517
/*
   Program 8: 
   Returning a new object from a function after performing 
   complex number addition.
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
    int r, i;
public:
    void setData(int real, int imag) { r = real; i = imag; }
    Complex add(Complex c) {
        Complex res;
        res.r = r + c.r;
        res.i = i + c.i;
        return res;
    }
    void show() { cout << r << " + " << i << "i" << endl; }
};


int main() {
    Complex c1, c2, c3;
    c1.setData(1, 2);
    c2.setData(3, 4);
    c3 = c1.add(c2);
    c3.show();
    return 0;
}