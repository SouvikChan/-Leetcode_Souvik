class Solution {
public:
     vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>> res;
        int n=mat.size() , m=mat[0].size();
       
        for(int i=0;i<n;i++)
        {
            vector<int> temp = mat[i];
            reverse(temp.begin(),temp.end());
            int x=lower_bound(temp.begin(),temp.end(),1)-temp.begin();
            res.push_back({m-x,i});  
        }
        vector<int> ans;
        sort(res.begin(),res.end());
        
     for(int i=0;i<k;i++)
    {
        ans.push_back(res[i].second);
    }
        return ans;
    }
};