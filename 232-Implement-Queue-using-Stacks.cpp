class MyQueue {
public:
    stack <int> s;
    MyQueue() {      
    }
    
    void push(int x) {
        s.push(x);
    }
    
    int pop() {
        stack <int> s2;
        while(!s.empty()){
            s2.push(s.top());
            s.pop();
        }
        int front = s2.top();
        s2.pop();
        while(!s2.empty()){
            s.push(s2.top());
            s2.pop();
        }
        return front;
    }
    
    int peek() {
         stack <int> s2;
        while(!s.empty()){
            s2.push(s.top());
            s.pop();
        }
        int front = s2.top();
        while(!s2.empty()){
            s.push(s2.top());
            s2.pop();
        }
        return front;
    }
    
    bool empty() {
        return s.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */