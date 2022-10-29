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
    bool isPalindrome(ListNode* head) {
        ListNode* tmp=head;
        vector<int>v,v1;
        while(tmp!=NULL)
        {
            v.push_back(tmp->val);
            tmp=tmp->next;
        }
        
        v1=v;
        reverse(v1.begin(),v1.end());
        return v==v1;
    }
};