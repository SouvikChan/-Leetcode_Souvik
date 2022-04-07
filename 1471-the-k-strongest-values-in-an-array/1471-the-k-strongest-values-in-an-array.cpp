class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end());
        int right=arr.size()-1;
        int left=0;
        int midIdx=(right)/2;
        int mid=arr[midIdx];
        vector<int> ans(k);
        int cnt=0;
        while(cnt<k){
            int val1=abs(arr[left]-mid);
            int val2=abs(arr[right]-mid);
            if(val2>=val1){
                ans[cnt]=arr[right];
                right--;
            }
            else{
                ans[cnt]=arr[left];
                left++;
            }
            cnt++;
        }
        return ans;
    }
};