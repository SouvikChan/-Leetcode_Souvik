class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.length();
        int n2 = s2.length();
        if(n1 > n2) 
            return 0;
        unordered_map<char,int> mp; 
        for(int i = 0; i < s1.length(); i++)
        {
            mp[s1[i]]++;
        }
        int i = 0, j = 0;
        int count = mp.size(); 
        int k = s1.length();
        while(j < n2)
        {
            if(mp.find(s2[j]) != mp.end())
            {
                mp[s2[j]]--;
                if(mp[s2[j]] == 0) 
                {
                    count--;
                }
            }
            
            if(j - i + 1 < k){
                j++;
            }
            else if(j - i + 1 == k)
            {
                if(count == 0)
                {
                    return 1;
                }
                if(mp.find(s2[i]) != mp.end())
                {
                    mp[s2[i]]++;
                    if(mp[s2[i]] == 1)
                    {
                        count++;
                    }
                }
                i++;
                j++;
            }
        }
        return 0;
    }
};