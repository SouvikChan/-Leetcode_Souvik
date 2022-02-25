class Solution {
public:
    int compareVersion(string v1, string v2) {     
        int m = v1.size(), n = v2.size(), i = 0, j = 0;
        int rev1 = 0, rev2 = 0;
        while(i < m || j < n){
            while(i < m && v1[i] != '.'){
                rev1 = rev1*10 + (v1[i] - '0');
                ++i;
            }
            while(j < n && v2[j] != '.'){
                rev2 = rev2*10 + (v2[j] - '0');
                ++j;
            }
            if(rev1 < rev2) return -1;
            if(rev1 > rev2) return 1;
            i++; j++;
            rev1 = 0; rev2 = 0;
        }
        return 0;
    }
};