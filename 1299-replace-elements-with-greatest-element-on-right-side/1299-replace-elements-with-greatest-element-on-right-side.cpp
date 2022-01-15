class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
       // int rev = reverse(arr.begin(),arr.end());
        int n=arr.size();
        int t;
        int m=-1;
        for(int i=n-1;i>=0;i--){
            t=arr[i];
            arr[i]=m;
            m=max(m,t);
        }
        return arr;
    }
};