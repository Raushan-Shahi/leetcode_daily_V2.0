class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        ListNode* prev = NULL;

        while(head != NULL){
            ListNode* forward = head->next;
            head->next = prev;
            prev = head;
            head = forward;
            
        }
        return prev;
    }
};