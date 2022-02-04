class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int totalgas=0;
        int currgas=0;
        int ans=0;
        for(auto it=0;it< n;it++){
            totalgas+=gas[it]-cost[it];
            currgas+=gas[it]-cost[it];
            if(currgas<0) currgas=0,ans=it+1;
        }
        if(totalgas<0) return -1;
        else return ans;
    }
};