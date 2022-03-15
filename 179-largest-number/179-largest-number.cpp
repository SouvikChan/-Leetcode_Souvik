class Solution {
public:
    
    static bool compa(string a,string b){
        return a+b>b+a;
    }
    
    string largestNumber(vector<int>& nums) {
        vector<string> ans;
        for(int x : nums){
        string temp = to_string(x);
        ans.push_back(temp);
        }
        sort(ans.begin(),ans.end(),compa);
        string out = "";
        for(string s : ans){
            out += s;
        }
        return out[0]=='0' ? "0" : out; 
    }
};