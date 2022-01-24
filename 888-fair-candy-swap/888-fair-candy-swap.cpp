class Solution {
public:
    vector<int> fairCandySwap(vector<int>& a, vector<int>& b) {
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int sum=accumulate(a.begin(),a.end(),0);
        int sum2=accumulate(b.begin(),b.end(),0);
        
        vector<int> ans;
        for(int i=0;i<a.size();i++){
            int seek=(sum+sum2)/2-sum+a[i];
            int low=0,high=b.size()-1;
            
            while(low<=high){
                int mid=low+(high-low)/2;
                if(b[mid]==seek){
                    ans={a[i],b[mid]};
                    return ans;
                }
                
                else if(b[mid]>seek) high=mid-1;
                else low=mid+1;
            }
        }
        return ans;
    }
};