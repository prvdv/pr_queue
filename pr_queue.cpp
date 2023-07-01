#include "pr_queue.h"
#include <iostream>
#include <vector>

void pr_queue::heapifyUp(int index){
    if (index == 0) return;
	int parent = (index - 1) / 2;
	if (heap[parent] < heap[index]) {
		std::swap(heap[parent], heap[index]);
		heapifyUp(parent);
	}
}