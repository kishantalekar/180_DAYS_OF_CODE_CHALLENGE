class MinStack {
    vector<pair<int,int>>st;
    int minele ;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty()){
            st.push_back({val,val});
        }else{

        minele = min(val,st.back().second);
        st.push_back({val,minele});
        }
    }
    
    void pop() {
        if(st.empty())return;
        st.pop_back();
    }
    
    int top() {
        if(!st.empty()){
            return st.back().first;
        }
        return -1;
    }
    
    int getMin() {
        if(!st.empty()){
            return st.back().second;
        }
        return -1;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push_back(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */