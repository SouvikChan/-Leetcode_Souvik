#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;++i) cin>>a[i];
        priority_queue<int,vector<int>,greater<int>>pq;
        vector<int> ans;
        for(int i=0;i<n;++i){
            if(i<k) pq.push(a[i]);
            else {
                pq.push(a[i]);
                ans.push_back(pq.top());
                pq.pop();
            }
        }
        while(!pq.empty()){
            ans.push_back(pq.top());
            pq.pop();
        }
        for(int i=0;i<ans.size();++i) cout<<ans[i]<<" ";
        cout<<"\n";
    }
}