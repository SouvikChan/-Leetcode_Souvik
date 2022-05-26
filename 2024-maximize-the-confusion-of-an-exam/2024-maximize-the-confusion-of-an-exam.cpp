class Solution {
public:
    int maxConsecutiveAnswers(string s, int k) {
        int res=0, j=0;
        int cnt=k;
        for(int i=0;i<s.size();++i){
            if(cnt==0 and s[i]=='F'){
                while(s[j]!='F') j++;
                cnt+=1;
                j++;
            }
            if(s[i]=='F') if(cnt>0) cnt--;
            if(i-j+1>res) res=i-j+1;
        }
        j = 0;
		int cnt1 = k;
		cout << res;
		for (int i=0; i<s.size(); i++){
			if (cnt1 == 0 && s[i] == 'T'){
				while (s[j] != 'T') j++;
				cnt1+=1;
				j++;
			}

			if (s[i] == 'T'){
				if (cnt1 > 0) cnt1--;
			}

			if (i - j + 1 > res) res = i - j + 1;
		}
        return res;
    }
};