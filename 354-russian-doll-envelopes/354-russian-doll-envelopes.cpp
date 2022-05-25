class Solution {
public:
    
    static bool compare(vector<int> &a,vector<int>&b){
        if(a[0]==b[0]) return a[1]>b[1];
        return a[0]<b[0];
    }
    
    int maxEnvelopes(vector<vector<int>>& ev) {
        int n=ev.size();
        sort(ev.begin(), ev.end(), compare);
        vector<int> lis;
        for(int i=0;i<n;++i){
            int ele=ev[i][1];
            int idx=lower_bound(lis.begin(),lis.end(),ele)-lis.begin();
            if(idx>=lis.size())
                lis.push_back(ele);
            else lis[idx]=ele;
        }
        return lis.size();
    }
};