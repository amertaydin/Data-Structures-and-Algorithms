#include <iostream>
#include <queue>

using namespace std;

void printQueue(queue<int> queue) {
    while (!queue.empty()) {
        cout << queue.front() << endl;
        queue.pop();
    }
}

int main() {
    queue<int> myQueue;
    myQueue.push(1);
    myQueue.push(2);
    myQueue.push(3);

    cout << "Size is " << myQueue.size() << endl;
    cout << "First element is " << myQueue.front() << endl;
    cout << "Last element is " << myQueue.back() << endl;

    cout << "My Queue: " << endl;
    printQueue(myQueue);

    return 0;
}
