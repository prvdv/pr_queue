#include <iostream>
#include <vector>
class pr_queue{
private:
    std::vector<int> heap;
    void heapifyUp(int index);
    void heapifyDown(int index);
public:
    pr_queue();
    pr_queue(const pr_queue& pq);
    bool empty();
    int size();
    void push(int value);
    void pop();
    int top();
    void print();
};