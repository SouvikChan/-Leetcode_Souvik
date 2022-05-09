class Solution {
public:
    string lastSubstring(string s) {
        char max = s[0];
        int length = s.size(), maxIndex = 0;
        for(int i = 1 ; i < length; ++i){
            if ( s[i] > max ){
                maxIndex = i;
                max = s[i];
            }
            else if (s[i] == max){
                int j = 1;
                while (s[i + j] == s[maxIndex + j] && maxIndex + j < i ) j++;
                if (s[i + j] > s[maxIndex + j]) maxIndex = i;
                i = i + j-1;
            }
        }
        return s.substr(maxIndex,length - maxIndex + 1);
    }
};