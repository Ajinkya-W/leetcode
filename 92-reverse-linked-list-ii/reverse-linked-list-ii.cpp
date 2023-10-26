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
        ListNode *temp, *prev, *curr, dummyFirst(-1000, head);
        curr = head, prev = &dummyFirst;
        prev->next = head;
        // Reaching correct start index
        for(int itr = 1; itr<left ; itr++){
            prev = curr;
            curr = curr->next;
        }
        ListNode *BeforeReversePrevNode = prev, *first = curr;
        // cout<< prev->val<<" "<<curr->val<<endl;
        for(int itr=1; itr <= right-left+1; itr++){
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        BeforeReversePrevNode->next = prev;
        first->next = curr;
        
        return dummyFirst.next;
    }
};