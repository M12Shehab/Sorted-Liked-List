// 
//
//  Assignment 5
//
//  Created by Mohammed Shehab on 4/1/2020.
//  Copyright © 2020 Mohammed Shehab. All rights reserved.
//
#include "SortedLinkedList.h"
#include<iostream>
#include<iomanip>
using namespace std;

bool SortedLinkedList::isempty()
{
	return(list == nullptr);
}

void SortedLinkedList::search(int item, bool& found)
{
	bool more;
	Node* location;
	location = list;
	found = false;
	more = (location != nullptr);
	while (more && !found)
	{
		if (location->data < item)
		{
			location = location->next;
			more = (location != nullptr);
		}
		else
			if (item == location->data)
				found = true;
			else
				more = false;

	}
}

void SortedLinkedList::insert(int item)
{
	Node* location, * pre, * newnod;
	location = list;
	pre = nullptr;
	bool more;
	more = (location != nullptr);
	while (more)
	{
		if (location->data < item)
		{
			pre = location;
			location = location->next;
			more = (location != nullptr);
		}
		else
			more = false;
	}//end while

	newnod = new Node();
	newnod->data = item;
	if (pre == nullptr)
	{
		newnod->next = list;
		list = newnod;
	}//in first

	else
	{
		newnod->next = location;
		pre->next = newnod;
	}
	lenght++;
}

void SortedLinkedList::remove(int item)
{
	Node* location, * pre, * temp;
	location = list;
	pre = nullptr;
	bool more;
	more = (location != nullptr);
	while (more)
	{
		if (location->data < item)
		{
			pre = location;
			location = location->next;
			more = (location != nullptr);
		}
		else
			more = false;
	}//end while

	temp = location;
	pre->next = location->next;
	delete temp;
	lenght--;
}

void SortedLinkedList::reset()
{
	Node* temp;

	while (list != nullptr)
	{
		temp = list;
		list = list->next;
		delete temp;
	}
	lenght = 0;
}

void SortedLinkedList::print()
{
	Node* location;
	location = list;
	cout << "\nITEMS : ";
	for (int i = 0; i < lenght; i++)
	{
		cout << location->data << setw(4);
		location = location->next;
	}
	cout << endl;
}
