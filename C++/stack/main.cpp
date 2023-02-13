#include <iostream>
#include <stack>

using namespace std;

void printStackElements(stack<int> stack) {
    while (!stack.empty()) {
        cout << stack.top() << endl;
        stack.pop();
    }
}

int main() {
    stack<int> numbersStack;
    numbersStack.push(1);
    numbersStack.push(5);
    numbersStack.push(3);
    numbersStack.push(7);

    if(numbersStack.empty())
        cout << "Stack is empty!" << endl;
    else
        cout << "Stack is not empty!" << endl;
    cout << "Stack size is " << numbersStack.size() << endl;

    printStackElements(numbersStack);

    //numbersStack.pop();

    cout << "Top element of stack is " << numbersStack.top() << endl;

    cout << "Stack size is " << numbersStack.size() << endl;

    return 0;
}
