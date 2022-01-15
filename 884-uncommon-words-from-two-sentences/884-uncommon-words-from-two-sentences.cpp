class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string> res;
		unordered_map<string, int> m;

		string word = "";

		for(int i = 0; i < s1.size(); i++){
			if(s1[i] == ' '){
				m[word]++;
				word = "";
			}
			else{
				word += s1[i];
			}
		}
		m[word]++;   

		word = "";
		for(int i = 0; i < s2.size(); i++){
			if(s2[i] == ' '){
				m[word]++;
				word = "";
			}
			else{
				word += s2[i];
			}
		}
		m[word]++; 

		for(auto i : m){
			if(i.second == 1){
				res.push_back(i.first);
			}
		}
		return res;
    }
};