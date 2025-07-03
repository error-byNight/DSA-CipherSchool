//https://www.geeksforgeeks.org/problems/insert-in-a-sorted-list/1

/*
structure of the node of the list is as
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    // Should return head of the modified linked list
    Node* sortedInsert(Node* head, int key) {
        // Code here
        Node* n =  new Node(key);
        
        if(head == NULL || n->data < head -> data){
            n->next = head;
            return n;
        }
        
        Node* curr = head;
        while(curr-> next != NULL && curr->next ->data <n ->data){
            curr = curr->next;
        }
        
        n->next = curr->next;
        curr->next =n;
        return head;
    }
};