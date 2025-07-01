#include <iostream> 
using namespace std;

class node{
    public:
    int data;
    Node *next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtEnd(Node *&head, int val){
    Node *n = new Node(val);

    if(head==NULL){
        head = n;
        return;
    }

    Node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void printList(Node* head){
    Node* temp = head;
    while (temp != NUll){
        cout << temp ->data << " ";
        temp = temp ->next;
    }
    cout << endl;
}

int main(){
    Node* head = NULL;
    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    insertAtEnd(head, 40);

    printList(head);

    return 0;
}