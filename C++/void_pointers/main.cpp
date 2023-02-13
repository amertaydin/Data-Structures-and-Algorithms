#include <iostream>

using namespace std;

void printNumber(int *numberPtr) {
    cout << *numberPtr << endl;
}

void printLetter(char *charPtr) {
    cout << *charPtr << endl;
}

void printAny(void *ptr, char type) {
    switch (type) {
        case 'i': // Handle int*
            cout << *(int *)ptr << endl; // need to cast because void* doesn't have a return type
            break;
        case 'c': // Hanlde char*
            cout << *(char *)ptr << endl;
            break;
        default:
            break;
    }
}

int main() {
    int number = 5;
    char letter = 'a';

    printNumber(&number);
    printLetter(&letter);

    printAny(&number, 'i');
    printAny(&letter, 'c');

    return 0;
}
