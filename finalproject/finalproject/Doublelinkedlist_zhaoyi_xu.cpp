


#include<iostream>
#include<string>
#include"Doublelinkedlist_zhaoyi_xu.h"
#include"Stockaccount_zhaoyi_xu.h"

using namespace std;

Doublelinkedlist::Doublelinkedlist()
{
	numofnodes = 0;
	first = new Node("", 0);
	last = new Node("", 0);
	first->next = last;
	first->pre = NULL;
	last->pre = first;
	last->next = NULL;
}

Doublelinkedlist::~Doublelinkedlist()
{
	Node *current = first;
	while (current)
	{
		Node *temp = current;
		current = current->next;
		delete temp;
		temp = NULL;
	}
}

Node * Doublelinkedlist::getfirst() const
{
	return first;
}

Node * Doublelinkedlist::getlast() const
{
	return last;
}

int Doublelinkedlist::getsize() const
{
	return numofnodes;
}

void Doublelinkedlist::addnode(Node * node)
{
	node->next = last;
	node->pre = last->pre;
	last->pre->next = node;
	last->pre = node;
}

void Doublelinkedlist::deletenode(string name)
{
	Node *node = findnode(name);
	if (node == nullptr)
	{
		cout << "Node not found!" << endl;
	}
	else
	{
		node->pre->next = node->next;
		node->next->pre = node->pre;
		delete node;
		numofnodes--;
	}
}

Node * Doublelinkedlist::findnode(string name)
{
	Node *current = first;
	while(current!=last)
	{
		if (current->next->itemName == name)
		{
			return current;
		}
		else
		{
			current = current->next;
		}
	}
	return nullptr;
}

Node * Doublelinkedlist::findposition(int pos) const
{
	if (pos > numofnodes||pos < 0)
	{
		cout << "Invalid position!" << endl;
		return nullptr;
	}
	Node *current = first;
	for (int n = 0; n < pos; n++)
	{
		current = current->next;
	}
	return current;
}

void Doublelinkedlist::swapnode(int pos1, int pos2) const
{
	if (pos1 > numofnodes || pos1<0 || pos2>numofnodes || pos2 < 0)
	{
		cout << "Please enter valid position(s)" << endl;
		return;
	}
	int i = pos1 - pos2;
	if (i == 0)
	{
		cout << "Please enter different numbers" << endl;
		return;
	}
	
}

void Doublelinkedlist::print()
{
	Node *current=first;
	while (current != last)
	{
		cout << current->itemName << fixed(6) << current->itemNo << fixed(6) << current->itemPrice;
	}
}
