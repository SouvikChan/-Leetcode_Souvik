//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
	public:
	
// 	int solve(int n,vector<int>&dp){
// 	    if(n==0) return 0;
// 	    if(dp[n]!=-1) return dp[n];
// 	    int ans=n;
// 	    for(int i=1;i*i<=n;++i){
// 	        ans=min(ans,1+solve(n-(i*i),dp));
// 	    }
// 	    return dp[n]=ans;
// 	}
	
	int MinSquares(int n)
	{
	    vector<int> dp(n+1,INT_MAX);
	   // return solve(n,dp);
	   dp[0]=0;
	   //int ans=n;
	   for(int j=1;j<=n;++j){
    	   for(int i=1;i*i<=n;++i){
    	       int temp=i*i;
    	       if(j-temp>=0) dp[j]=min(dp[j],dp[j-temp]+1);
    	   }
	   }
	   return dp[n];
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans = ob.MinSquares(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends