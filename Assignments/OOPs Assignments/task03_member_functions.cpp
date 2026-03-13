// Author: Shiv Gobind, Roll No. 241517
/*
   Program 3: 
   Implementing member functions inside and outside the class 
   using the scope resolution operator (::).
*/

#include <iostream>    
#include <vector>      
#include <algorithm>  
#include <cmath>       
#include <string>      
#include <map>
#include <chrono>
using namespace std;


class Rectangle {
    double length, width;
public:
    void setDimension(double l,double w){
        length = l;
        width = w;
    }

    double calculateArea();
};

double Rectangle::calculateArea(){
    return length * width;
}
int main(){
    Rectangle rect;
    rect.setDimension(10.0, 5.0);

    cout <<"Area : "<<rect.calculateArea() << endl;
    
    return 0;
}