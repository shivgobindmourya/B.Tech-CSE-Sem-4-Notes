// Author: Shiv Gobind, Roll No. 241517
/*
   Program 17: 
   Dynamically allocating memory for an object using the 'new' 
   keyword and initializing it via a constructor.
*/

#include <iostream>

using namespace std;

class Matrix {
    int rows, cols;
    int** data;

public:
    Matrix(int r, int c) : rows(r), cols(c) {
        data = new int*[rows];
        for(int i = 0; i < rows; i++) {
            data[i] = new int[cols]{0}; // Initialize to zero
        }
        cout << "Matrix " << rows << "x" << cols << " allocated." << endl;
    }

    // Destructor to prevent memory leaks
    ~Matrix() {
        for(int i = 0; i < rows; i++) {
            delete[] data[i];
        }
        delete[] data;
        cout << "Matrix memory deallocated." << endl;
    }

    // Helper method to see what's happening
    void display() {
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    // Create a 3x3 matrix on the stack
    Matrix myMatrix(3, 3);

    cout << "Contents:" << endl;
    myMatrix.display();

    return 0;
}