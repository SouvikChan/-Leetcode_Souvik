class Solution {
public:
    
    unordered_map<char, string> dig;
    vector<string>ans;
    int len;
    
    void backtrack(string& digits, string& dial,int ind){
        for(int i=ind;i<len;i++){
            for(char x:dig[digits[i]]){
                dial.push_back(x);
                if(dial.size()==len) ans.push_back(dial);
                else backtrack(digits,dial,i+1);
                dial.pop_back();
            }
        }
    }
    
    vector<string> letterCombinations(string digits) {
        dig['2']="abc";
        dig['3']="def";
        dig['4']="ghi";
        dig['5']="jkl";
        dig['6']="mno";
        dig['7']="pqrs";
        dig['8']="tuv";
        dig['9']="wxyz";
        
        len=digits.size();
        string dial;
        backtrack(digits, dial, 0);
        return ans;
    }
};