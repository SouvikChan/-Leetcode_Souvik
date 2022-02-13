class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int index=sentence.find(searchWord);
        int cnt=0;
        vector<string> v;
        stringstream ss(sentence);
        while(ss.good())
        {
            auto& s = v.emplace_back("");
            getline(ss, s, ' ');
        }
        
        for(int i = 0;i<v.size();++i)
        {
            if(v[i].find(searchWord) == 0)
                return i + 1;
        }
        return -1;
    }
};