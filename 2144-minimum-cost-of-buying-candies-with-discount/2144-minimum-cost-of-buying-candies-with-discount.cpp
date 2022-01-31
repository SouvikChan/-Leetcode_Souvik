class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n = cost.size();
        sort(cost.begin(), cost.end(), greater<int>());
        if (n % 3 < 3)
            for (int i = 1; i <= (3 - n % 3); i++)
                cost.emplace_back(0);
        int ans = 0;
        n = cost.size();
        for (int i = 0; i < n; i += 3)
            ans += cost[i] + cost[i + 1];   
        return ans;
    }
};