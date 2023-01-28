class SummaryRanges {
public:
    
    set<int>data_items;
    
    SummaryRanges() {
        
    }
    
    void addNum(int value) {
        data_items.insert(value);
    }
    
    vector<vector<int>> getIntervals() {
        vector<vector<int>>nums;
        int start=-1;
        int end=-1;
        for(auto &item:data_items){
            if(start==-1){
                start=item;
                end=item;
            }
            else if(item==end+1){
                end=item;
            }
            else{
                nums.push_back({start,end});
                start=end=item;
            }    
        }
        if (start != -1) nums.push_back({start, end});
        return nums;
    }
};

/**
 * Your SummaryRanges object will be instantiated and called as such:
 * SummaryRanges* obj = new SummaryRanges();
 * obj->addNum(value);
 * vector<vector<int>> param_2 = obj->getIntervals();
 */