class MyStack {
    queue<int> list;
public:
    MyStack() {

    }
    
    void push(int x) {
        int n = list.size();
        list.push(x);
        for(int i = 0; i<n ; i++){
            list.push(list.front());
            list.pop();
        }
    }
    
    int pop() {
        int i = list.front();
        list.pop();
        return i;
    }
    
    int top() {
        return list.front();
    }
    
    bool empty() {
        return list.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */