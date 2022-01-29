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
    int pairSum(ListNode* head) {
        stack<int> st;
        ListNode *temp=head;
        while(temp){
            st.push(temp->val);
            temp=temp->next;
        }
        int maxTwin=0;
        int size =st.size();
        int cnt=0;
        while(cnt++<=size/2){
            maxTwin = max(maxTwin,st.top()+head->val);
            st.pop();
            head=head->next;
        }
        return maxTwin;
    }
};