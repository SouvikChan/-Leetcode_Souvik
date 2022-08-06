class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        int count=minutesToTest/minutesToDie;
        return ceil(log(buckets)/log(count+1));
    }
};