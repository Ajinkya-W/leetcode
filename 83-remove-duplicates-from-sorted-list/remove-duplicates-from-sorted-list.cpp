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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *first = head, *last=head, *curr_node = head;
        
        if(!head || head->next == NULL)//if only one number or no number
            return head;
        
        int curr_val, prev_val = curr_node->val;//temp is looping node link
        curr_node = curr_node->next;//now at 2nd pos
        // curr_val = temp->val;//2nd pos val
        bool flag = 0;
        while(curr_node!=NULL)
        {
            curr_val = curr_node->val;
            if(curr_val != prev_val)
            {
                prev_val = curr_node->val;//update prev val from curr val
                last = last->next;
                swap(last->val , curr_node->val);
            }
            
            curr_node = curr_node->next;    
            
        }
        last->next=NULL;
        return head;
    }
};