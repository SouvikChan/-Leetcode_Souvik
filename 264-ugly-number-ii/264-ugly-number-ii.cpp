class Solution {
public:
    int nthUglyNumber(int n) {
        set<long long> st;
        st.insert(1);
        long long num=0;
        for(int i=0;i<n;i++){
            num=*st.begin();
            st.erase(num);
            st.insert(num*2);
            st.insert(num*3);
            st.insert(num*5);
        }
        return num;
    }
};