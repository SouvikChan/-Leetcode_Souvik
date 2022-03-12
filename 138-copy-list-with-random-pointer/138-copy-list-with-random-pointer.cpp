/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    unordered_map<Node*, Node*> mp;
    Node* copyRandomList(Node* head, Node* ans=NULL) {
        if(head==NULL) return head;
        ans= new Node(head->val);
        mp[head]=ans;
        ans->next = copyRandomList(head->next,ans->next);
        ans->random=mp[head->random];
        return ans;
    }
};