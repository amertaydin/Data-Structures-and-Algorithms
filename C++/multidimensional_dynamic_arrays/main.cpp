#include <iostream>

using namespace std;

int main() {
    int rows, cols;
    cout << "rows, cols: ";
    cin >> rows >> cols;

    // Create a pointer to a pointer, it will store the address of the arrays
    int **table = new int*[rows];

    for (int i = 0; i < rows; i++) {
        table[i] = new int[cols]; // Allocate memory for the arrays
    }

    table[1][2] = 88; // Assign value

    for (int i = 0; i < rows; i++) {
        delete[] table[i]; // Deallocate backwards
    }

    delete[] table;
    table = NULL; // Assign NULL to prevent access to unreached pointer

    return 0;
}
