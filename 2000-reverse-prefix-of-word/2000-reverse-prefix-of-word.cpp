class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n=word.size();
        int store=0;
        for(int i=0;i<n;i++){
            if(word[i]==ch){
                store=i;
                break;
            }
        }
        string x=word.substr(0,store+1);
        string y=word.substr(store+1,n);
        reverse(x.begin(), x.end());
        return x+y;
    }
};