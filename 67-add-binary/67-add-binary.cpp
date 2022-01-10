class Solution {
public:
    string addBinary(string a, string b) {
        string ans = "";
        int ptr1 = a.size() - 1, ptr2 = b.size() - 1, carry = 0;
        
        while(ptr1 >= 0 || ptr2 >= 0 || carry) {
            if(ptr1 >= 0) carry += a[ptr1--] - '0';
            if(ptr2 >= 0) carry += b[ptr2--] - '0';
            ans.push_back((carry % 2) + '0');
            carry = carry / 2;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};