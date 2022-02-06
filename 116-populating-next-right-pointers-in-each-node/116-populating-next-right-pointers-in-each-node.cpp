/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    
    void set_next(Node* n, Node* next){
        if(n==NULL) return;
        n->next= next;
        set_next(n->left, n->right);
        auto it = n->next !=NULL ? n->next->left : NULL;
        set_next(n->right, it);
    }
    
    Node* connect(Node* root) {
        if(root==NULL) return 0;
        set_next(root,NULL);
        return root;
    }
};