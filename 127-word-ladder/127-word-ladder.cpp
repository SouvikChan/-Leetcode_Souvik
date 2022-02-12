class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        bool isPresent = false;
        unordered_set<string> st;
        for(auto it:wordList){
            st.insert(it);
            if(it == endWord){
                isPresent = true;
            }
        }
        if(!isPresent){
            return 0;
        }
        int depth = 0;
        int size = 1;
        queue<string> q;
        q.push(beginWord);
        while(size){
            while(size--){
                string top = q.front();
                q.pop();
                for(int j=0;j<beginWord.size();j++){
                    char block = top[j];
                    for(char i='a';i<='z';i++){
                        if(block == i) continue;
                        top[j]=i;
                        if(st.find(top) != st.end()){
                            cout<<top<<endl;
                            q.push(top);
                            st.erase(top);
                        }
                        if(top == endWord){
                            return depth+2;
                        }
                    }    
                    top[j] = block;
                }
            }
            size = q.size();
            depth++;
        }
        return 0;
    }
};