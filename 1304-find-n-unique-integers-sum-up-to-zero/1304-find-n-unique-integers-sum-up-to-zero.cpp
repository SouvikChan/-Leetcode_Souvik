class Solution {
public:
    vector<int> sumZero(int n) {
        if(n==1)
            return {0};
        vector<int> ans;
        if(n&1){
            for(int i=-(n/2);i<=n/2;i++)
                ans.push_back(i);
        }
        else{
            for(int i=-(n/2);i<=n/2;i++){
                if(i!=0)
                    ans.push_back(i);
            }
        }
        return ans;
    }
};