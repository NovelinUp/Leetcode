#include "thehead.h"

class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> st;
    stack<int> minst;
    MinStack() {
        while (!st.empty()) st.pop();
        while (!minst.empty()) minst.pop();
    }

    void push(int x) {
        st.push(x);
        if (minst.empty() || x <= minst.top()) minst.push(x);
    }

    void pop() {
        if (st.empty()) return;
        int x = st.top();
        st.pop();
        if (x == minst.top()) minst.pop();
    }

    int top() {
        if (st.empty()) return -1;
        return st.top();
    }

    int min() {
        if (minst.empty()) return -1;
        return minst.top();
    }
};