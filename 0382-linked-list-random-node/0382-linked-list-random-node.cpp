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
    ListNode* head=NULL;
    
    Solution(ListNode* head) {
        this->head=head;
    }
    
    int getRandom() {
        int ans=0, i=1;
        ListNode *need=this->head;
        while(need){
            if(rand()%i==0) ans=need->val;
            i++;
            need=need->next;
        }
        return ans;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */