///https://leetcode.com/problems/remove-nth-node-from-end-of-list/submissions/1685691445/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* slow = head;
    ListNode* fast = head;

        // Move fast pointer n steps ahead
     for (int i = 0; i < n; ++i) {
            fast = fast->next;
        }

        // If fast is null, we need to remove the head
        if (!fast) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        // Move both pointers until fast reaches the last node
        while (fast->next) {
            fast = fast->next;
            slow = slow->next;
        }

        // Remove the nth node from the end
        ListNode* toDelete = slow->next;
        slow->next = slow->next->next;
        delete toDelete;

        return head;

    }
};