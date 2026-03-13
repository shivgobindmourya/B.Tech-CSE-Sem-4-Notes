// Author: Shiv Gobind, Roll No. 241517
/*
   Program 5: 
   Creating an array of objects to store and display details 
   for multiple employees.
*/

#include <iostream>    
#include <vector>      
#include <algorithm>  
#include <cmath>       
#include <string>      
#include <map>
#include <chrono>
using namespace std;

class Employee {
    int id;
    string name;
public:
    void setData(int i, string n) { id = i; name = n; }
    void display() { cout << "ID: " << id << " | Name: " << name << endl; }
};  

int main() {
    Employee emp[3];
    emp[0].setData(1, "John");
    emp[1].setData(2, "Sara");
    emp[2].setData(3, "Alex");

    for(int i = 0; i < 3; i++) emp[i].display();
    return 0;
}

