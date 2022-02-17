class CombinationIterator {
public:
    string s;
    int length;
    vector<string> combinations;
    int searchNext=0;
    CombinationIterator(string characters, int combinationLength) {
        s=characters;
        sort(s.begin(),s.end());
        length=combinationLength;
        findCombinations(s,length,0,"");
    }
    
    string next() {
        int idx=searchNext;
        if(idx<combinations.size()){
            searchNext++;
            return combinations[idx];
        }
        return "";
    }
    
    bool hasNext() {
        if(searchNext<combinations.size())
            return true;
        return false;
    }
    
     void findCombinations(string s, int length, int idx, string temp){
        if(temp.size() == length){
            combinations.push_back(temp);
            return;
        }
        for(int i=idx; i<s.size(); i++){
            temp.push_back(s[i]);
            findCombinations(s, length, i+1, temp);
            temp.pop_back();
        }
    }
};

/**
 * Your CombinationIterator object will be instantiated and called as such:
 * CombinationIterator* obj = new CombinationIterator(characters, combinationLength);
 * string param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */