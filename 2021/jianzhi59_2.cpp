#include "thehead.h"

class MaxQueue {
public:
    queue<int> q;
    deque<int> help;
    MaxQueue() {
        while (!q.empty()) q.pop();
        while (!help.empty()) help.pop_back();
    }

    int max_value() {
        if (help.empty()) return -1;
        return help.front();
    }

    void push_back(int value) {
        q.push(value);
        while (!help.empty() && value > help.back()) help.pop_back();
        help.push_back(value);
    }

    int pop_front() {
        if (q.empty()) return -1;
        int x = q.front();
        q.pop();
        if (x == help.front()) help.pop_front();
        return x;
    }
};