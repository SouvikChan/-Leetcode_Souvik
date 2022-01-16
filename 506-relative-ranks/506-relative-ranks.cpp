class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>,vector<pair<int,int>>> pq;
        for(int i=0;i<score.size();i++){
            pq.push(make_pair(score[i],i));
        }
        int n = score.size();
        vector<string> ans(n);
        int cnt = 1;
        while(!pq.empty()){
            auto it = pq.top();
            pq.pop();
            if(cnt==1){
                ans[it.second] = "Gold Medal";
            }else if(cnt==2){
                ans[it.second] = "Silver Medal";
            }else if(cnt==3){
                ans[it.second] = "Bronze Medal";
            }else{
                ans[it.second] = to_string(cnt);
            }
            cnt++;
        }
        return ans;
    }
};