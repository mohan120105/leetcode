class MinStack {
private:
    stack<int> st;     // Main stack
    stack<int> minst;  // Stack to store min values

public:
    MinStack() {}

    void push(int val) {
        st.push(val);
        // Always push to `minst` if empty or if `val` is <= current min
        if (minst.empty() || val <= minst.top()) {
            minst.push(val);
        }
    }

    void pop() {
        if (st.top() == minst.top()) {
            minst.pop();
        }
        st.pop();
    }

    int top() {
        return st.top();
    }

    int getMin() {
        return minst.top();
    }
};
