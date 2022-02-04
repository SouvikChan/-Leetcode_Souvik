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
        if(head==NULL) return NULL;
        int cnt=0;
        ListNode* temp =head;
        while(temp!=NULL){
            cnt+=1;
            temp=temp->next;
        }
        cnt-=n;
        if(cnt==0) return head->next;
        ListNode* crr=head;
        ListNode* prev=NULL;
        while(cnt>0){
            prev=crr;
            crr=crr->next;
            cnt-=1;
        }
        prev->next=crr->next;
        crr->next=NULL;
        delete(crr);
        return head;
    }
};