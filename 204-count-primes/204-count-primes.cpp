class Solution {
public:
    int countPrimes(int n) {
        if(n==0||n==1) return 0;
    int numberOfPrimes = n-1;
    vector<bool> isPrime(n, true);
    isPrime[1] = false;
    numberOfPrimes -= 1;
    for(int i=2;i<n;i++){ 
	   if(isPrime[i]){
            for(int j=2*i;j<n;j+=i){
				if(isPrime[j]){ numberOfPrimes--; }
                isPrime[j] = false;
            }	
        }
    }
    return numberOfPrimes;
    }
};