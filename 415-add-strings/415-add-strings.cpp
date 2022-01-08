class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans="";
        int i=num1.size()-1,j=num2.size()-1,crry=0;
        while(i>=0 ||j>=0 || crry){
            long sum=0;
            if(i>=0){
                sum+=(num1[i]-'0');i--;    
            }
            if(j>=0){
                sum+=int(num2[j]-'0');j--;
            }
            sum+=crry;
            int l=sum%10;
            crry=sum/10;
            ans+=to_string(l);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};