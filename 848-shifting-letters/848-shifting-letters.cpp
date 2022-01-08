class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
            int n = shifts.size();
            string a = s;
            int suffixSum[n+1];
            suffixSum[n] = 0;
            for(int i = n-1; i > -1; i--){
                suffixSum[i] = suffixSum[i+1] + shifts[i];
                suffixSum[i] %= 26;
            }
            for(int i = 0; i < n; i++){
                int key = (a[i]-'a' + suffixSum[i])%26;
                a[i] = (char)(97+key);
            }
            return a;  
    }
};