class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        auto w1=reduce(word1.begin(),word1.end());
        auto w2=reduce(word2.begin(),word2.end());
        if(w1==w2) return true;
        return false;
    }
};