class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> mp;
        for (auto i: t) mp[i]++;
        //Creating Variables
        int ans = INT_MAX;
        int i = 0, j = 0;
        int count = mp.size();
        int start = 0;
        // starting to  solve

        while (j < s.length())
        {
            // CALCULATION STEP (As Aditya's general format)
            mp[s[j]]--;
            if (mp[s[j]] == 0) count--;
            // trying to minimize the window size after getting a candidate for answer
            if (count == 0)
            {
                while (count == 0)
                {
                    if (ans > j - i + 1)
                    {
                        ans = j - i + 1; //updating the answer
                        start = i;
                    }

                    mp[s[i]]++;
                    if (mp[s[i]] > 0)
                        count++;
                    i++;
                }
            }
            j++;
        }
        if(ans!= INT_MAX) 
            return s.substr(start, ans);
        else
            return "";
    }
};