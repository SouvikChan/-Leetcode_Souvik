class Solution {
public:
    vector<int>ans;
    int digit(int n){
       int cnt=0; 
       while(n>0){
           cnt++;
           n/=10;
       } 
        return cnt;
    }
    void findNum(int num,int n,int k){
        if(digit(num)==n){
            ans.push_back(num);
            return;
        }
        for(int i=0;i<=9;++i){
            int ned=num%10;
            if(abs(ned-i)==k){
                int x=num*10+i;
                findNum(x,n,k);
            }
        }
    }
    
    vector<int> numsSameConsecDiff(int n, int k) {
        for(int i=1;i<=9;++i){
            findNum(i,n,k);
        }
        return ans;
    }
};