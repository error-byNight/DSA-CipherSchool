#include<iostream>
using namespace std;

class MyQueue{
public:
    int arr[10];
    int front, rear;

    MyQueue(){
        front = 0;
        rear = 0;
    }

    // Enqueue operation
    bool enqueue(int x) {
        if(rear == 10) { // Queue is full
            cout << "Queue Overflow\n";
            return false;
        }
        arr[rear++] = x;
        return true;
    }

    // Dequeue operation
    int dequeue() {
        if(front == rear) { // Queue is empty
            cout << "Queue Underflow\n";
            return -1;
        }
        int val = arr[front++];
        // Reset indices if queue becomes empty
        if(front == rear) {
            front = 0;
            rear = 0;
        }
        return val;
    }

    // Print queue elements
    void printQueue() {
        if(front == rear) {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Queue: ";
        for(int i = front; i < rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    MyQueue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.printQueue();

    cout << "Dequeued: " << q.dequeue() << endl;
    q.printQueue();

    q.enqueue(40);
    q.enqueue(50);
    q.printQueue();

    // Dequeue all
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.printQueue();

    // Try to dequeue from empty queue
    q.dequeue();

    return 0;
}