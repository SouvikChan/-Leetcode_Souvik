class Solution {
public:
    int getMinSwaps(string num, int k) {
        string s=num;
        int n=num.size();
        while(k--){
            next_permutation(s.begin(),s.end());
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(num[i]!=s[i]){
                int j=i+1;
                while(num[j]!=s[i]){
                    j++;
                }
                while(j>i)
                {
                    swap(num[j] , num[j-1]);
                    j--;
                    ans++;
                }
            }
        }
        return ans;
    }
};