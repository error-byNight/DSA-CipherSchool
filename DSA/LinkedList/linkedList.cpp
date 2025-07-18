#include <iostream> 
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

void insertAtEnd(Node *&head, int val) {
    Node *n = new Node(val);

    if (head == NULL) {
        head = n;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = n;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}



void deleteFromPosition(Node* &head, int pos){
    if(head == NULL) return;
    if(pos == 0){
        deleteFromBeginning(head);
    }
    Node*temp = head;
    for(int i = 0; i<pos - 1; I++){
        temp = temp -> next;
    }
    Node* toDel = temp->next;
    temp->next = temp->next->next;
    delete toDel;
}



bool search(Node*head, int key){
    Node* temp = head;
    while(temp != NULL){
        if(temp->data == key)
            return true;
        temp = temp->next;
    }
    return false;  
}




int main() {
    Node* head = NULL;
    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    insertAtEnd(head, 40);

    printList(head);

    return 0;
}