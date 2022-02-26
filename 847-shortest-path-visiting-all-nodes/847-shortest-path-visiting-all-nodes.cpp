class Solution {
public:
    int shortestPathLength(vector<vector<int>>& graph) {
        int n=graph.size();
        int ans=0;
        queue<vector<int>> q;
        set<pair<int,int>> s;
        for(int i=0;i<n;i++){
            int mask=(1<<i);
            int node=i;
            int len=0;
            vector<int> arr{len,node,mask};
            q.push(arr);
            s.insert({node,mask});
        }
        while(!q.empty()){
            auto curNodeInfo =q.front();
            q.pop();
            if(curNodeInfo[2]==(1<<n)-1){
                ans=curNodeInfo[0];
                break;
            }
            for(auto it:graph[curNodeInfo[1]]){
                int mask=curNodeInfo[2] | (1<<it);
                if(s.find({it,mask})==s.end()){
                    s.insert({it,mask});
                    vector<int>v{curNodeInfo[0]+1,it,mask};
                    q.push(v);
                }
            }
        }
        return ans;
    }
};