class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int child =0;
        int cookies = 0;
        int cnt =0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        while(child < g.size() && cookies <s.size()){
            if(s[cookies] >= g[child]){
                child++;
                cnt++;
            }
            cookies++;
        }
        return cnt;
    }
};