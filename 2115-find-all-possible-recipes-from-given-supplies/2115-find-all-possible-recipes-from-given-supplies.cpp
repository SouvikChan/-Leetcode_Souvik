class Solution {
public:
    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) {
        unordered_set<string> st(supplies.begin(),supplies.end());
        bool order=true;
        int n=recipes.size();
        vector<int> vis(n, false);
        vector<string> ans;
        while(order){
            order=false;
            for(int i=0;i<n;++i){
                if(vis[i]) continue;
                bool table=true;
                for(auto & s:ingredients[i]){
                    if(st.find(s)==st.end()){
                        table=false;
                        break;
                    }
                }
                if(table){
                    order=true;
                    st.insert(recipes[i]);
                    vis[i]=true;
                    ans.push_back(recipes[i]);
                }
            }
        }
        return ans;
    }
};