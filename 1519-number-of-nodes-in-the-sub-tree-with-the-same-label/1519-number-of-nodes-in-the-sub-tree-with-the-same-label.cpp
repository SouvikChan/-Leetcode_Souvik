class Solution {
public:
    vector<int> arr;
    vector<int> dfs(int prev,int curr,vector<vector<int>>& a,string& labels)
    {
        vector<int> ans(26); 
        for(auto x:a[curr])
        {
            if(prev!=x)
            {
                vector<int> res = dfs(curr,x,a,labels); 
                for(int i=0;i<26;i++) 
                    ans[i]+=res[i];
            }
        }
        arr[curr] = ++ans[labels[curr]-'a'];
        return ans;
    }
    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        arr.resize(n);
        vector<vector<int>> a(n);
        for(auto x:edges){
            a[x[0]].push_back(x[1]);
            a[x[1]].push_back(x[0]);
        }
        dfs(-1,0,a,labels);
        return arr;
    }
};