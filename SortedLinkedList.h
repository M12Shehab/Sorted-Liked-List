// 
//
//  Assignment 5
//
//  Created by Mohammed Shehab on 4/1/2020.
//  Copyright © 2020 Mohammed Shehab. All rights reserved.
//
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