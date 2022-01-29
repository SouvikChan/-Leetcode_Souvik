class Solution {
public:
    int minPartitions(string s) {
        int n=s.size();
        int ans=0;
        for(int i=0;i<=n;i++){
            if(s[i]=='9'){
                ans=9;
                break;
            }
            ans=max(ans,s[i]-'0');
        }
        return ans;
    }
};