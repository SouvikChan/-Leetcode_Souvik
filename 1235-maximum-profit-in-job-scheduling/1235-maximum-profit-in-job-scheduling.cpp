class Solution {
public:
    vector<int>dp;
int find(vector<vector<int>>& events,int idx,int end){
    if(idx==events.size())
        return 0;
    if( events[idx][0] < end )
        return find( events, idx + 1 , end );
    if( dp[idx] != -1)
        return dp[idx];
    int res= max ( events[idx][2] + find(events, idx + 1 , events[idx][1] ),  find(events , idx + 1 , end ) );
    return dp[idx] = res;
}
int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit)
{
    vector<vector<int>>events(startTime.size(),vector<int>(3,0));
    for(int i=0;i<startTime.size();i++)
    {
        events[i][0]=startTime[i];
        events[i][1]=endTime[i];
        events[i][2]=profit[i];
    }
    sort(events.begin() , events.end());
    int n = events.size();
    dp.resize( n,-1);
    return find(events , 0 , 0);
}
};