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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int mini=INT_MAX;
        int firstInd=-1;
        int prevInd=-1;
        int lastInd=-1;
        int prev=head->val;
        head=head->next;
        int cnt=0;
        while(head and head->next){
            int curr=head->val;
            if((curr>prev and curr>head->next->val) ||(curr<prev and curr<head->next->val)){
                lastInd=cnt;
                if(firstInd==-1) firstInd=cnt;
                if(prevInd!=-1) mini =min(mini,cnt-prevInd);
                prevInd=cnt;
            }
            cnt++;
            prev=head->val;
            head=head->next;
        }
        if(mini==INT_MAX) return {-1,-1};
        return {mini,lastInd-firstInd};
    }
};