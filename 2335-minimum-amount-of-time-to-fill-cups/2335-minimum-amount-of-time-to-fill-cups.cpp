class Solution {
public:
    int fillCups(vector<int>& amount) {
        int maxi=0, sum=0;
        for(auto i:amount){
            maxi=max(maxi,i);
            sum+=i;
        }
        return max(maxi,(sum+1)/2);
    }
};