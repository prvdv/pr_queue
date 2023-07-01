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
void pr_queue::heapifyDown(int index){
    int left = 2 * index + 1;
	int right = 2 * index + 2;
	int min = index;
	if (left < heap.size() && heap[left] > heap[min]) {
		min = left;
	}
	if (right < heap.size() && heap[right] > heap[min]) {
		min = right;
	}
	if (min != index) {
		std::swap(heap[index], heap[min]);
		heapifyDown(min);
	}
}