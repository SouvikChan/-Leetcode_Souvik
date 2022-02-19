class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        set<int> st;
        for(auto &it:nums){
            if(it%2) 
                it*=2;    
            st.insert(it);
        }
        int mindev= *st.rbegin() - *st.begin();
        while(*st.rbegin()%2==0){
            st.insert(*st.rbegin()/2);
            st.erase(*st.rbegin());
            mindev = min(mindev, *st.rbegin()-*st.begin());
        }
        return mindev;
    }
};