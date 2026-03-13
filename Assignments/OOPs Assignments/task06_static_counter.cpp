// Author: Shiv Gobind, Roll No. 241517
/*
   Program 6: 
   Using static data members and static functions to keep track 
   of the number of objects created.
*/

#include <iostream>    
#include <vector>      
#include <algorithm>  
#include <cmath>       
#include <string>      
#include <map>
#include <chrono>
using namespace std;

class Counter {
    static int count; 
public:
    Counter() { count++; }
    static void showCount() { cout << "Count: " << count << endl; }
};

int Counter::count = 0; // Static initialization


int main() {
    Counter a, b, c;
    Counter::showCount();
    return 0;
}