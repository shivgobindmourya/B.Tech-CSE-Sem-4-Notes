// Author: Shiv Gobind, Roll No. 241517
/*
   Program 15: 
   Implementing multiple constructors (Default, Parameterized, Copy) 
   within the same class.
*/

#include <iostream>    
#include <vector>      
#include <algorithm>  
#include <cmath>       
#include <string>      
#include <map>
#include <chrono>
using namespace std;

class BankAccount {
    double balance;
public:
    // Default
    BankAccount() { balance = 0.0; }
    
    // Parameterized
    BankAccount(double initial_bal) { balance = initial_bal; }
    
    // Copy
    BankAccount(const BankAccount &other) { balance = other.balance; }

    void show() { cout << "Balance : $ " << balance << endl; }
};


int main() {
    int money = 500;
    BankAccount a1;
    a1.show();
    BankAccount a2(600);
    a2.show();
    BankAccount a3(money);
    a3.show();

    return 0;
}