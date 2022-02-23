/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if(!node) return NULL;
        unordered_map<Node*, Node*> map;
        queue<Node*> q;
        q.emplace(node);
        map.emplace( make_pair(node, new Node(node->val)) );
        while(!q.empty()){
            auto v = q.front();
            q.pop();
            for(Node* e: v->neighbors){
                if(map.find(e) == map.end()){
                    map.emplace( make_pair(e, new Node(e->val)) );
                    q.emplace(e);
                }
                map[v]->neighbors.emplace_back(map[e]);
            }
        }
        return map[node];
    }
};