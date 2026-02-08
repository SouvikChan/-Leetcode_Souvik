class Solution
{
    public:
        int lengthOfLongestSubstring(string s)
        {
            int n = s.size();
            int left = 0;
            int maxLen = 0;
            unordered_map<char, int> mp;
            for (int right = 0; right < n; right++)
            {
                if (mp.count(s[right]) && mp[s[right]] >= left){
                    left = mp[s[right]] + 1;
                }
                mp[s[right]] = right;
                maxLen = max(maxLen, right - left + 1);
            }
            return maxLen;
        }
};