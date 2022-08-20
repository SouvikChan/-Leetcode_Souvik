class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        priority_queue<int>pq;
        int minStops=0;
        int currentStation=0;
        int totalStation=stations.size();
        while(startFuel<target){
            while(currentStation < totalStation && stations[currentStation][0]<= startFuel){
                pq.push(stations[currentStation][1]);
                currentStation++;
            }
            if(pq.empty()) return -1;
            startFuel+=pq.top();
            pq.pop();
            minStops++;
        }
        return minStops;
    }
};