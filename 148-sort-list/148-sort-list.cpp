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
    ListNode* sortList(ListNode* head) {
        vector<int>v;
        ListNode*temp=head;
        while(temp!=NULL)
        {
            v.push_back(temp->val);
            temp=temp->next;
        }
        sort(v.begin(),v.end());
        ListNode*newhead=new ListNode(0);
        ListNode*tempo=newhead;
        for(int i=0;i<v.size();i++)
        {
            ListNode * dummy=new ListNode(v[i]);
            tempo->next=dummy;
            tempo=dummy;
        }
        return newhead->next;
    }
};