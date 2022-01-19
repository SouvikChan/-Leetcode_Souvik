class Solution {
public:
    bool areNumbersAscending(string s) {
        stringstream st(s);
        string word;
        int last=-1;
        while(st>>word){
            if(isdigit(word[0])){
                int num=stoi(word);
                if(last>=num) return false;
                else last=num;
            }
        }
        return true;
    }
};