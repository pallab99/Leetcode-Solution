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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL)
            return NULL;
        while(head!=NULL and head->val==val)
            head=head->next;
        ListNode* prev=NULL;
        ListNode* cur=head;
        while(cur!=NULL)
        {
            if(cur->val==val)
            {
                prev->next=cur->next;
                cur=cur->next;
            }
            else 
            {
                prev=cur;
                cur=cur->next;
            }
        }
        
        return head;
    }
};