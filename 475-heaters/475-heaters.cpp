class Solution {
public:
    int findRadius(vector<int>& house, vector<int>& heaters) {
        sort(house.begin(),house.end());
        sort(heaters.begin(),heaters.end());
        int ans=0;
        for(int i=0;i<house.size();++i){
            int idx=lower_bound(heaters.begin(),heaters.end(),house[i])-heaters.begin();
            int x=INT_MAX, y=INT_MAX;
            if(idx<heaters.size()){
                y=heaters[idx]-house[i];
            }
            if(idx-1>=0){
                x=house[i]-heaters[idx-1];
            }
            int temp=min(x,y);
            ans=max(temp,ans);
        }
        return ans;
    }
};   