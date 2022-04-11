class Solution {
public:
    
    void solve(string ans, string str,int idx, int k,vector<string> &v){
         if(k==4){
            if(idx>=str.length()){
                ans.pop_back();
                v.push_back(ans);
            }
            return ;
        }
        string ip;
        for(int i=idx;i<str.length();++i){
            if(ip=="0") return;
            ip+=str[i];
            if(stoi(ip)>=0 and stoi(ip)<=255 ){
                string it=ans;
                ans+=ip+".";
                solve(ans,str,i+1,k+1,v);
                ans=it;
            }
            else if(stoi(ip)>255) return;
        }
    }
    
    vector<string> restoreIpAddresses(string s) {
       vector<string> v;
        string ans;
        solve(ans,s,0,0,v);
        return v;
    }
};