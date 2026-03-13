// Author: Shiv Gobind, Roll No. 241517
/*
   Program 4: 
   Using an array inside a class to store marks for multiple subjects 
   and calculating the average.
*/

#include <iostream>    
#include <vector>      
#include <algorithm>  
#include <cmath>       
#include <string>      
#include <map>
#include <chrono>
using namespace std;


class Marks{
    int subjects[5];
public:
    void inputMarks(){
        cout<<"Enter the Marks for the 5 Subjects : ";
        for(int i = 0; i<5; i++) {
            cin >> subjects[i];
        }
    }

    void calculateAverage() {
        float sum = 0;
        for(int i = 0; i < 5; i++) sum += subjects[i];
        cout << "Average: " << sum / 5 << endl;
    }
};

int main() {
    Marks m1;
    m1.inputMarks();
    m1.calculateAverage();
    return 0;
}
