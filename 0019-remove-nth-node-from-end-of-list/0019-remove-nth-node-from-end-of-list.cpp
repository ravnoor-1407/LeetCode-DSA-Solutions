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
        // Count the length of list
        int length = 0;
        ListNode* temp = head;
        while (temp != nullptr) {
            length++;
            temp = temp -> next;
        }
        // Search for position to remove
        int pos = length - n;
        if (pos == 0) {
            return head -> next;
        }
        // Traversal to node
        temp = head;
        for (int i = 1; i < pos; i++) {
            temp = temp -> next;
        }
        // Remove node
        temp -> next = temp -> next -> next;
        return head;
    }
};