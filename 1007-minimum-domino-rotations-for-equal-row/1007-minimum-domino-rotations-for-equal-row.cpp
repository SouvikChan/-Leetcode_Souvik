class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int n=tops.size();
        vector<int> fA(7), fB(7),same(7);
        for(int i=0;i<n;++i){
            ++fA[tops[i]];
            ++fB[bottoms[i]];
            if(tops[i]==bottoms[i])
                ++same[tops[i]];
        }
        int minRot=INT_MAX;
        for(int i=1;i<=6;i++){
            if(fA[i]+fB[i]-same[i]==n)
                minRot=min(minRot,min(fA[i],fB[i])-same[i]);
        }
        if(minRot==INT_MAX) return -1;
        else return minRot;
    }
};