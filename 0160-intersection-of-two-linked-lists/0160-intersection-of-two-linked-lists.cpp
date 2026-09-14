class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // Find lengths of both lists
        int lenA = 0, lenB = 0;
        ListNode* tempA = headA;
        ListNode* tempB = headB;
        
        while (tempA) {
            lenA++;
            tempA = tempA->next;
        }
        while (tempB) {
            lenB++;
            tempB = tempB->next;
        }
        
        // Move longer list ahead by difference
        tempA = headA;
        tempB = headB;
        if (lenA > lenB) {
            int diff = lenA - lenB;
            while (diff--) tempA = tempA->next;
        } else {
            int diff = lenB - lenA;
            while (diff--) tempB = tempB->next;
        }
        
        // Move both together until they meet
        while (tempA && tempB) {
            if (tempA == tempB) return tempA;
            tempA = tempA->next;
            tempB = tempB->next;
        }
        
        return nullptr;
    }
};
