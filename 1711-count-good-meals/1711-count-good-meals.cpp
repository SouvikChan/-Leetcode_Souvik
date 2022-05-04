class Solution {
public:
    int mod=(1e9+7);
    int countPairs(vector<int>& deliciousness) {
        unordered_map<int,int> dish;
        long long ans=0;
        for(auto x : deliciousness){
            for(int i=1;i<=(1<<22);i*=2){
                if(dish.count(i-x)) ans+=dish[i-x];
            }
            dish[x]+=1;
        }
        return ans%mod;
    }
};