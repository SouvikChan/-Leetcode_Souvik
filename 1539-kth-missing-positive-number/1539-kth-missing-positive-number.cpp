class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        // int n=arr.size();
        map<int,int> mp;
        int cnt=0;
        int n=0;
        for(auto i=0;i< arr.size();i++){
            mp[arr[i]]++;
        }
        for(int i=1;i<=2000;i++){
            if(mp.find(i)==mp.end()){
                n=i;
                cnt++;
            }
            if(cnt==k){
                return n;
            }
        }
        return n;
    }
};