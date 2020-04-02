#pragma once
#include "Node.h"
class SortedLinkedList {
	Node* list;
	int lenght;
public:
	SortedLinkedList() :list(nullptr), lenght(0) {}
	bool isempty();
	void search(int item, bool& found);
	void insert(int item);
	void remove(int item);
	void reset();
	void print();
};