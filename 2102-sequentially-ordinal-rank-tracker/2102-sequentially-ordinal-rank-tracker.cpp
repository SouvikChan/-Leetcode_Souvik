class SORTracker {
public:
    
    priority_queue<pair<int, string>,vector<pair<int, string>>,greater<pair<int, string>>> max_heap;  
    priority_queue<pair<int,string>> min_heap;
    
    SORTracker() {
        
    }
    
    void add(string name, int score) {
        min_heap.emplace(-score, name); 
        auto item = min_heap.top();
        min_heap.pop();
        max_heap.emplace(move(item));
    }
    
    string get() {
        auto item = max_heap.top();
        max_heap.pop();
        min_heap.emplace(item);
        return item.second;
    }
};

/**
 * Your SORTracker object will be instantiated and called as such:
 * SORTracker* obj = new SORTracker();
 * obj->add(name,score);
 * string param_2 = obj->get();
 */