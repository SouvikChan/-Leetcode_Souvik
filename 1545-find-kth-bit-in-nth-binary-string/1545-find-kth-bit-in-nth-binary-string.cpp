class Solution {
public:
     int KthBit(int n,int k){
        if(n==1 and k==1){
            return 0;
        }
        int mid=pow(2,n)/2;
        if(k==mid){
            return 1;
        }
        else if(k>mid){
            return !(KthBit(n-1,((2*mid) - k)));
        }
        else{
            return KthBit(n-1,k);
        }
    }
    
    char findKthBit(int n, int k) {
        int ans=KthBit(n,k);   
        char s = ans + '0';
        
        return s;
    }
};