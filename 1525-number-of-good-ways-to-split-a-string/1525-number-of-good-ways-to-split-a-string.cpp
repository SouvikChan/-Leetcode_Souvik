class Solution {
public:
    int numSplits(string s) {
        int cnt=0;
        map<char, int> left;
        map<char, int> right;
        for(int i=0;i<s.length();i++){
            right[s[i]]++;
        }
        int RSize=right.size();
        for(int i=0;i<s.length();i++){
            left[s[i]]++;
            right[s[i]]--;
            if(right[s[i]]==0)
                RSize--;
            if(left.size()==RSize)
                cnt++;
        }
        return cnt;
    }
};