#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};
void insertAtEnd(Node* & head, int val){
    Node* n = new Node(val);

    if(head == NULL){
        n-> next = n;
        head = n;
    }

    Node* temp = head;
    while(temp->next != head){
        temp = temp -> next;
    }
    n -> next = head;
    temp -> next = n;
}

void insertAtPosotion(Node* &head, int pos, int val){
    Node* n = new Node(val);
    Node* temp = head;
    for (int i = 0; i<pos; i++){
        temp = temp->next;
    }
    n->next = temp -> next;
        temp->next = n;
    
}

// INSERT AT BEGINNING

int main(){
    Node* head = NULL;
    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);

    // Print the circular linked list
    Node* temp = head;
    if (head != NULL) {
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
    }
    cout << endl;
    return 0;
}