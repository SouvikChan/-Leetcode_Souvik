class SeatManager {
public:
    
    vector<int> seats;
    int pos = 0;
    priority_queue<int, vector<int>, greater<int>> pq;
    
    SeatManager(int n) {
        vector<int> temp(n, 0);
        seats = temp;
    }
    
    int reserve() {
        if(pq.empty()){
            seats[pos] = 1;
            pos++;
            return pos;
        }
        int x = pq.top();
        seats[x-1] = 1;
        pq.pop();
        return x;
    }
    
    void unreserve(int seatNumber) {
        seats[seatNumber-1];
        pq.push(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */