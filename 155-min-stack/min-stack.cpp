class MinStack {
public:
    MinStack() {
        
    }
    stack<pair<int,int>>s; //first stores top , second stores  min
    void push(int val) {
        int mini;
      if(s.empty()){
        mini = val;
      }else{
        mini = min(s.top().second, val); 
      }
      s.push({val,mini});
    }
    
    void pop() {
      s.pop();
    }
    
    int top() {
        return s.top().first;
    }
    
    int getMin() {
        return s.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */