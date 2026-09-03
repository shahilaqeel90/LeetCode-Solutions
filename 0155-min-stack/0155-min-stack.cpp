class MinStack {
    stack<int>s;
    stack<int>s2;
public:
    MinStack() {
        
    }
    
    void push(int value) {
        s.push(value);

        if(s2.empty()){
            s2.push(value);
        }
        else{
            s2.push(min(value,s2.top()));
        }
    }
    
    void pop() {
        if(!s.empty()){
            s.pop();
            s2.pop();
        }
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return s2.top();
    }
    
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */