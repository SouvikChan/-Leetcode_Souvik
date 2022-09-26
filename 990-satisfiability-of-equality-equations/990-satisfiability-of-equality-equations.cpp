class Solution {
public:
    int parent[26];
    int find(int x) {
        if (parent[x] == x) return x;
        return parent[x] = find(parent[x]);
    }
    bool equationsPossible(vector<string>& equations) {
        int n = (int) equations.size();
        for (int i = 0; i < 26; i++) parent[i] = i;
        for (auto e : equations) {
            if (e[1] == '=') {
                parent[find(e[0]- 'a')] = find(e[3] - 'a');
            }
        }
        for (auto e : equations) {
            if (e[1] == '!' && find(e[0] - 'a') == find(e[3] - 'a')) {
                return false;
            }
        }
        return true;
    }
};