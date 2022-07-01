class Solution {
public:
    
    static bool compare(vector<int>&a, vector<int>&b){
        if(a[1]>b[1]) return true;
        return false;
    }
        
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int n=boxTypes.size();
        int ans=0;
        sort(boxTypes.begin(), boxTypes.end(),compare);
        for(int i=0;i<n;++i){
            if(boxTypes[i][0]<=truckSize){
                ans+=boxTypes[i][0]*boxTypes[i][1];
                truckSize-=boxTypes[i][0];
            }
            else if(boxTypes[i][0]>truckSize){
                ans+=truckSize*boxTypes[i][1];
                break;
            }
        }
        return ans;
    }
};