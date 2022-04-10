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
    
    int cntNodes(ListNode* head){
        int n=0;
        while(head){
            n++;
            head=head->next;
        }
        return n;
    }
    
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int n=cntNodes(head);
        int part_node=n/k, left=n%k;
        ListNode *ptr=head, *prev=NULL;
        vector<ListNode*> ans(k);
        for(int i=0;i<k;++i){
            ans[i]=head;
            for(int j=0;j<part_node+(i<left);j++){
                prev=head;
                head=head->next;
            }
            if(prev) prev->next=NULL;
        }
        return ans;
    }
};