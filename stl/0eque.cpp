#include <iostream>
#include <queue>

int main() {
    std::queue<int> dq;

    // Enqueue (push) elements to the queue
    dq.push(1);
    dq.push(2);
    dq.push(3);

    // Dequeue (pop) elements from the queue
    dq.pop();

    // Check if the queue is empty
    bool isEmpty = dq.empty();

    std::cout << "Is the queue empty? " << (isEmpty ? "Yes" : "No") << std::endl;

    return 0;
}
