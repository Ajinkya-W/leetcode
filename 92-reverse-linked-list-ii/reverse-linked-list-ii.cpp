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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        return reverseList(head, left, right);
    }
    ListNode* reverseList(ListNode* head, int left, int right) {
        // intialisation
        ListNode *temp, *prev, dummyFirst(-1000, head);
        prev = &dummyFirst;
        prev->next = head;
        // Reaching correct start index
        for(int itr = 1; itr<left ; itr++){
            prev = head;
            head = head->next;
        }
        // preserving so that we can point it after end of process
        ListNode *BeforeReversePrevNode = prev, *first = head;
        // iterating elements number times
        for(int itr=1; itr <= right-left+1; itr++){
            temp = head->next;
            head->next = prev;
            prev = head;
            head = temp;
        }
        BeforeReversePrevNode->next = prev;
        first->next = head;
        
        return dummyFirst.next;
    }
};