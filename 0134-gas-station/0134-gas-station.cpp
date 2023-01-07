class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalGas=0, totalCost=0;
        for(int i=0;i<gas.size();++i){
            totalGas+=gas[i];
            totalCost+=cost[i];
        }
        if(totalCost>totalGas) return -1;
        int startInd=0, curGas=0;
        for(int i=0;i<gas.size();++i){
            if(curGas<0){
                curGas=0;
                startInd=i;
            }
            curGas += (gas[i]-cost[i]);
        }
        return startInd;
    }
};