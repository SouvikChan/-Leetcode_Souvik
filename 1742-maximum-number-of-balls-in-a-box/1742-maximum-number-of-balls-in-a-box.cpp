class Solution {
public:
    int sums(int n){
        int sum=0;
        while(n){
            int r=n%10;
            sum+=r;
            n/=10;
        }
        return sum;
    }
    int countBalls(int low, int high) {
        unordered_map<int,int> mp;
        for(int i=low;i<=high;i++){
            int x=sums(i);
            mp[x]++;
        }
        int maxx=0;
        for(auto it:mp){
            if(maxx<it.second){
                maxx=it.second;
            }
        }
        return maxx;
    }
};