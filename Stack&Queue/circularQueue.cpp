#include <iostream>
using namespace std;

class circularQueue{
public:
    int* arr;
    int size;
    int front, rear;

    circularQueue(int n){
        size = n;
        arr = new int[size];
        front = rear = -1;
    }

    bool enqueue(int value){
        if((rear + 1) % size == front){
            cout << "Queue is full\n";
            return false;
        }
        if(front == -1) front = 0;
        rear = (rear + 1) % size;
        arr[rear] = value;
        return true;
    }

    int dequeue(){
        if(front == -1){
            cout << "Queue is empty\n";
            return -1;
        }
        int ans = arr[front];
        if(front == rear){
            front = rear = -1;
        }
        else{
            front = (front + 1) % size;
        }
        return ans;
    }

    void printQueue() {
        if(front == -1) {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Queue: ";
        int i = front;
        while(true) {
            cout << arr[i] << " ";
            if(i == rear) break;
            i = (i + 1) % size;
        }
        cout << endl;
    }
};

int main() {
    circularQueue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.printQueue();

    cout << "Dequeued: " << q.dequeue() << endl;
    q.printQueue();

    q.enqueue(50);
    q.enqueue(60); // Should show "Queue is full" if full
    q.printQueue();

    q.dequeue();
    q.dequeue();
    q.printQueue();

    return 0;
}