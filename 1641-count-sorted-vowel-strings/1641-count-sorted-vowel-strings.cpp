class Solution {
public:
    int countVowelStrings(int n) {
        vector<int> ar(5, 1);
        for(int i=2;i<=n;i++){
            for(int j=ar.size()-2;j>=0;j--)
                ar[j]+=ar[j+1];
        }
        long long sum=accumulate(ar.begin(),ar.end(),0);
        return sum;
    }
};