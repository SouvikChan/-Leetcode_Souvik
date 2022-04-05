class Solution {
public:
    
    bool seen[16]={};
    int ans=0;
    int dfs(int n,int pos=1){
        if(pos>n) return ans++;
        for(int i=1;i<=n;i++){
            if(!seen[i] and (i%pos==0 || pos%i==0)){
                seen[i]=true;
                dfs(n,pos+1);
                seen[i]=false;
            }
        }
        return ans;
    }
    
    int countArrangement(int n) {
        // if(n<4) return n;
        return dfs(n);        
    }
};