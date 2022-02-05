class Solution {
public:
    int reachNumber(int target) {
        target = abs(target);
        int sum=0;
        int steps=0;
        while(sum<target){
            steps++;
            sum+=steps;
        }
        if(sum==target) return steps;
        int diff=sum-target;
        if(diff%2==0) return steps;
        else {
            if(steps%2==0) return steps+1;
            else return steps+2;
        }
        return 1;
    }
};