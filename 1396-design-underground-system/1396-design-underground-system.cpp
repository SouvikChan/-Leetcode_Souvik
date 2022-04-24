class UndergroundSystem {
    unordered_map<int,pair<string,int>> mp;
    unordered_map<string,unordered_map<string,pair<int,int>>> v;
public:
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        mp[id].first=stationName;
        mp[id].second=t;
    }
    
    void checkOut(int id, string stationName, int t) {
        if(v[mp[id].first].count(stationName)<=0){
            v[mp[id].first][stationName].second=1;
            v[mp[id].first][stationName].first=t-mp[id].second;
        }
        else{
             v[mp[id].first][stationName].second++;
            v[mp[id].first][stationName].first+=t-mp[id].second;
        }
    }
    
    double getAverageTime(string startStation, string endStation) {
            double j= (double)( (double)v[startStation][endStation].first/(double)v[startStation][endStation].second);
            return j;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */