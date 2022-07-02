class Solution {
public:
    int maxArea(int h, int w, vector<int>& hC, vector<int>& vC) {
        sort(hC.begin(),hC.end());
        sort(vC.begin(),vC.end());
        
        long long hmx=0, vmx=0, prev=0;
        for(auto i:hC) 
            hmx=max(hmx,i-prev), prev=i;
        hmx=max(hmx,h-prev);
        prev=0;
        for(auto x:vC) 
            vmx=max(vmx, x-prev), prev=x;
        vmx=max(vmx,w-prev);
        
        int mod = 1e9 + 7;
        return (vmx*hmx)%mod;
    }
};