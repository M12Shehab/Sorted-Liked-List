// Sorted Liked List.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "SortedLinkedList.h"
using namespace std;

int main()
{
	int num, ch;
	SortedLinkedList moh;

	do
	{
		cout << "\n\t\t\t\"MAIN\"\n\n";
		cout << "\n1) Insert item\n2) Delete item\n3) search for item\n4) Print\n"
			<< "5) Reset\n6) Exit\n"
			<< "Enter your choise: ";
		cin >> ch;
		switch (ch)
		{
		case 1: {bool found;
			cout << "Enter the item : ";
			cin >> num;
			moh.search(num, found);
			if (!found)
				moh.insert(num);
			else
				cout << "The item is in the list !";
		}break;
		case 2: {
			bool found;
			if (moh.isempty())
				cout << "Sorry the list is empty ! ! !\n";
			else {
				cout << "Enter the item to delete : ";
				cin >> num;
				moh.search(num, found);
				if (found)
					moh.remove(num);
				else
					cout << "The element is \" NOT \" in the list !\n";
			}//end else
		}break;
		case 3: {bool found;
			if (!moh.isempty())
			{
				cout << "Enter the item to search : ";
				cin >> num;
				moh.search(num, found);
				if (found)
					cout << "The item is in the list\n";
				else
					cout << "The item is \" NOT \" in the list\n";
			}
			else
				cout << "list is empty\n";
		}break;
		case 4: {
			if (moh.isempty())
				cout << "list is empty\n";
			else
				moh.print(); }break;
		case 5: {
			if (moh.isempty())
				cout << "list is empty\n";
			else
				moh.reset(); }break;
		case 6:break;
		default:cout << "Wrong enter please enter between 1 - 6\n";
		}
	} while (ch != 6);

	cout << "\t\tMohammed Ali Alawi Bin Shihab\n";
}
