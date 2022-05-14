class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<pair<int,int>> g[n+1];
        for(int i=0;i<times.size();i++) g[times[i][0]].push_back(make_pair(times[i][1],times[i][2]));
        vector<int> dist(n+1, 1e9);
        dist[k]=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
        q.push(make_pair(0, k));
        pair<int,int> temp;
        bool vis[n+1];
        memset(vis,false,sizeof(vis));
        while(!q.empty()){
            temp=q.top();
            q.pop();
            int u=temp.second;
            vis[u]=true;
            for(int i=0;i<g[u].size();++i){
                int v=g[u][i].first;
                int w=g[u][i].second;
                if(vis[v]==false and dist[v]>dist[u]+w){
                    dist[v]=dist[u]+w;
                    q.push(make_pair(dist[v],v));
                }
            }
        }
        int res=0;
        for(int i=1;i<dist.size();++i){
            res=max(res,dist[i]);
        }
        if(res==1e9) return -1;
        return res;
    }
};