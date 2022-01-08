class Solution {
public:
    string replaceDigits(string s) {
        for(int i=0;i<s.length();i++){
			if(isdigit(s[i]))   
				s[i]=((s[i-1]-'a')+(s[i]-'0'))+'a';   
		}
		return s;
    }
};