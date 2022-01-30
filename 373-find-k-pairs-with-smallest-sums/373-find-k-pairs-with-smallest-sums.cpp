class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        
        vector<vector<int>>res; 
        priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>>pQ;
        for(int i=0;i<n1 && i<k;i++)pQ.push({nums1[i]+nums2[0],nums1[i],0});
        while(k-- && !pQ.empty())
        {
            auto t = pQ.top();  
            pQ.pop();
            res.push_back({t[1],nums2[t[2]]});
            
            if(t[2]==n2-1)continue;
            pQ.push({t[1]+nums2[t[2]+1],t[1],t[2]+1});  
        }
        
        return res;
    }
};