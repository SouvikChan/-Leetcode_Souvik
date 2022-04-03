class Solution {
public:
    long long minimumPerimeter(long long neededApples) {
        long long n = 0;
        while (2 * n * (n + 1) * (1 + 2 * n) < neededApples)
            ++n;
        return  n * 8;
    }
};