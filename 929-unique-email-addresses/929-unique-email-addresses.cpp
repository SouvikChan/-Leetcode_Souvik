class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string> ans;
        for(string email:emails) {
            size_t found = email.find('@');
            string domain = email.substr(found+1);
            string local = email.substr(0,found); 
            string newlocal;
            for(char c:local){ 
                if(c=='+') 
                    break; 
                else if(c=='.') 
                    continue;
                else newlocal+=c;
            }
            newlocal+= '@'+domain; 
            ans.insert(newlocal);
        }
        return ans.size();
    }
};