class MyCalendar {
public:
    
    unordered_map<int,int>mp;
    
    MyCalendar() {
        // return {};
    }
    
    bool book(int s1, int e1) {
        for(auto& [s2, e2]:mp)
            if( !(s1 >= e2 || s2 >= e1) ) return false; 
        mp[s1] = e1;
        return true;
    }

};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */