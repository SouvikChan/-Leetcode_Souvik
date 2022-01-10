class Solution {
public:
    string reverseVowels(string s) {
        // if(s.size()==0)
            // return;
        // s.erase(s.begin);
       unordered_set<char>set={'a','e','i','o','u','A','E','I','O','U'};
        int n=s.length();
        for(int i=0,j=n-1;i<=j;)
        { 
            bool is_vowel_i=set.find(s[i])!=set.end();
            bool is_vowel_j=set.find(s[j])!=set.end();
            if(is_vowel_i)
            {
                if(is_vowel_j)
                {
                    swap(s[i++],s[j--]);
                }
                else
                    j--;
            }
            else
            {
                if(is_vowel_j)
                    i++;
                else
                {
                    i++;
                    j--;
                }
            }
        }
        return s;
    }
};