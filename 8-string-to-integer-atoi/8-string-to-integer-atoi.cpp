class Solution {
public:
    int myAtoi(string s) {
        int n=s.length(),i=0;
		bool flag=false;
		while(i<n and s[i]==' ')
            i++;
		if(s[i]=='+') i++;
		else if(s[i]=='-'){
			flag=true;
			i++;
		}
		long long res=0;
		while(i<n){
			if(s[i]>='0' and s[i]<='9'){
				res=res*10+(s[i]-'0');
				if(res>=INT_MAX) break;
			}
			else if((s[i]=='+' or s[i]=='-') and res==0) return 0;
			else break;
			i++;
		}
		if(flag) res*=-1; 
		
		if(res<=INT_MIN) return INT_MIN;
		else if(res>=INT_MAX) return INT_MAX;
		return res;
    }
};