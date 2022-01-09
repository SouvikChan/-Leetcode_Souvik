class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& a) {
        int n = a.size();
		set <int> ans;
		for(int i = 0; i < n; i++) 
        {
			for(int j = 0; j < n; j++) 
            {
				if(j == i) continue;
				for(int k = 0; k < n; k++) 
                {
					if(k == i || k == j) continue;

					if(a[i] % 2 == 0 && a[k] != 0) 
                    {
						ans.insert(a[k] * 100 + a[j] * 10 + a[i]);
					}
				}
			}
		}
		return vector <int> (ans.begin(), ans.end());
        
    }
};