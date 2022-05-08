class Solution {
public:
    
    int rev(int n){
        int temp=0;
        while(n!=0){
            int x=n%10;
            n/=10;
            temp=temp*10+x;
        }
        return temp;
    }
    
    string thousandSeparator(int n) {
        if(n==0) return "0";
        string ans;
        int added=0;
        while(n!=0){
            if(added==3){
                ans.push_back('.');
                added=0;
            }
            int dig=n%10;
            n/=10;
            ans.push_back(dig+'0');
            added++;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};