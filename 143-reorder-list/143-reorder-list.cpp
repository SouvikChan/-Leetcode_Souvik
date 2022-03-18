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
    void reorderList(ListNode* head) {
       if(!head||!head->next) return;
        stack<ListNode*> s;
        ListNode* slow=head,*fast=head;
        int cnt=0;
        while(fast&&fast->next){
            cnt++;
            slow=slow->next;
            fast=fast->next->next;
        }
        while(slow){
            s.push(slow);
            slow=slow->next;
        }
        slow=head;
        while(cnt--){
            fast=slow->next;
            slow->next=s.top();
            s.top()->next=fast;
            slow=fast;
            s.pop();
        }
        slow->next=NULL;  
    }
};