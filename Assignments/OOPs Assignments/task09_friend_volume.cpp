// Author: Shiv Gobind, Roll No. 241517
/*
   Program 9: 
   Using a friend function to access private members of two 
   different classes (Box and Cylinder) to compare volumes.
*/

#include <iostream>    
#include <vector>      
#include <algorithm>  
#include <cmath>       
#include <string>      
#include <map>
#include <chrono>
using namespace std;

class Cylinder; // Forward declaration

class Box {
    double vol = 50.0;
    friend void compare(Box, Cylinder);
};

class Cylinder {
    double vol = 40.0;
    friend void compare(Box, Cylinder);
};

void compare(Box b, Cylinder c) {
    if(b.vol > c.vol) cout << "Box is larger" << endl;
    else cout << "Cylinder is larger" << endl;
}

int main() {
    Box b; Cylinder c;
    compare(b, c);
    return 0;
}