#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
    int n = 0;
    int m = 0;
    // Check if the number of arguments is correct
    if (argc != 4) {
        cout << "Wrong number of arguments." << endl;
        return 1;
    }    
    
    // Open the input file
    ifstream A(argv[1]);

    // Print the input file with getline
    string line;
    while (getline(A, line)) {
        cout << line << endl;
        n++;

    }
    // Open the input file
    ifstream B(argv[2]);

    // Print the input file with getline
    string line2;
    while (getline(B, line2)) {
        cout << line2 << endl;
        m++;

    }

    ofstream C(argv[3]);
    C << n << endl;
    C << m << endl;
    if (n == m) {
        C << "Dimensions match." << endl;

    } 
    else {
        C << "Dimensions do not match." << endl;
    }

    return 0;
}