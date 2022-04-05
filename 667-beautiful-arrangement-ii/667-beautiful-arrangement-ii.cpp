class Solution {
public:
    vector<int> constructArray(int n, int k) {
        vector<int> a(n, 0);
        int left=1, right=n, i=0;
        while(i<n-k) a[i++]=left++;
        while(i<n){
            a[i++]=right--;
            if(i==n)
                break;
            a[i++]=left++;
        }
        return a;
    }
};