class MyCircularQueue {
    vector<int>qu;
    int first, last, size, capacity;
public:
    MyCircularQueue(int k) {
        capacity=k;
        qu=vector<int>(k);
        first=size=0;
        last=-1;
    }
    
    bool enQueue(int value) {
        if(!isFull()){
            if(last==capacity-1)last=0;
            else last++;
            qu[last]=value;
            size++;
            return true;
        }
        return false;
    }
    
    bool deQueue() {
        if(!isEmpty()){
            if(first==capacity-1)first=0;
            else first++;
            size--;
            return true;
        }
        return false;
    }
    
    int Front() {
        if(isEmpty())return -1;
        return qu[first];
    }
    
    int Rear() {
        if(isEmpty())return -1;
        return qu[last];
    }
    
    bool isEmpty() {
        if(size==0) return true;
        return false;
    }
    
    bool isFull() {
        if(size==capacity)return true;
        return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */