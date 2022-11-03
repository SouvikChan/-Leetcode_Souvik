class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        int cnt[26][26]={};
        int ans=0;
        for(auto w:words){
            auto x=w[0]-'a';
            auto y=w[1]-'a';
            if(cnt[y][x]){
                ans+=4;
                cnt[y][x]--;
            }
            else cnt[x][y]++;
        }
        for(int i=0;i<26;++i){
            if(cnt[i][i]){
                ans+=2;
                break;
            }
        }
        return ans;
    }
};