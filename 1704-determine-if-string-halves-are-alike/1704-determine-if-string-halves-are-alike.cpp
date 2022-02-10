class Solution {
public:
    bool halvesAreAlike(string s) {
        vector<char> vowels = {'A','E','I','O','U'};
        int first = 1;
        int second = 1;
        for(int i =0 , j = s.length()/2 ;i<s.length()/2;i++,j++){
            for(auto ch : vowels){
                if(s[i] == ch || s[i] == (char)(ch+32)) first++;
                if(s[j] == ch || s[j] == (char)(ch+32)) second++;
            }
        }
        return first == second;
    }
};