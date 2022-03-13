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
    ListNode* reverseList(ListNode* head){
        if(head==NULL || head->next==NULL) return head;
        ListNode* temp=reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        return temp;
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* curr=head;
        int i=0;
        for(i=0;i<k-1 && curr;i++){
            curr=curr->next;
        }
        if(i<k-1||!curr)
            return head;
        ListNode*nexx=curr->next;
        curr->next=NULL;
        ListNode* ptr=reverseList(head);
        head->next=reverseKGroup(nexx,k);
        return ptr;
    }
};