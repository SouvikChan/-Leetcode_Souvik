class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> vec(n+1, 0);
        for(auto x: trust){
            vec[x[0]]--;
            vec[x[1]]++;
        }
        for(int i=1;i<n+1;i++){
            if(vec[i]==n-1)
                return i;
        }
        return -1;
    }
};