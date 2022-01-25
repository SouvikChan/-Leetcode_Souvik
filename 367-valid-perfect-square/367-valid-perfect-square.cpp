class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1 || num==0) return true;
        long long low=0, high=num;
        while(low<=high){
            long long mid=low+(high-low)/2;
            if(mid*mid==num)return true;
            if(mid*mid<num)
                low=mid+1;
            else high=mid-1;
        }
        return false;
    }
};