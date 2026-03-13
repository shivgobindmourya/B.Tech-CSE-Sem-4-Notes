// Author: Shiv Gobind, Roll No. 241517
/*
   Program 2: 
   Creating a Book class with private data members and public 
   member functions to set and display data.
*/

#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    double price;

public:
    void setDetails(string t, string a, double p) {
        title = t;
        author = a;
        price = p;
    }

    void displayDetails() {
        cout << "Title: " << title << "\nAuthor: " << author << "\nPrice: " << price << endl;
    }
};

int main() {
    Book myBook;
    myBook.setDetails("C++ Programming", "Bjarne Stroustrup", 59.99);
    myBook.displayDetails();
    return 0;
}