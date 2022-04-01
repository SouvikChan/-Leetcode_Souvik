class Solution {
public:
    bool isValid(string s) {
        int j = false;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == 'c' && j > 1 && s[j - 1] == 'b' && s[j - 2] == 'a')
                j -= 2;
            else
                s[j++] = s[i];
        }
        return j == false;
    }
};