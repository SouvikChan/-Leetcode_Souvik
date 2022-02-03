class Solution {
public:
    
    bool pCheck(string s, int start, int end) {
        while(start <= end) {
            if(s[start] != s[end]) {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
    
    bool validPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;
        while (left <= right) {
            if(s[left] != s[right]) {
                //two conditions 
                if(pCheck(s, left + 1, right) || pCheck(s, left, right - 1)) {
                    return true;
                } else {
                    return false;
                }
            }
            left++;
            right--;
        }
        return true;
    }
};