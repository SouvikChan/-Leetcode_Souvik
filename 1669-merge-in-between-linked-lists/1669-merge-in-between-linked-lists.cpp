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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode*p,*r;
        r=list1;
        int count=0;
        while(r){ 
            if(count+1==a){
                p=r;
            }
            if(count==b){
                break;
            }
            r=r->next;
            count++;
        }
        p->next=list2;
        while(list2->next){
            list2=list2->next;
        }
        list2->next=r->next;
        return list1;
    }
};