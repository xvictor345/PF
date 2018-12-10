


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
	return nullptr;
}

Node * Doublelinkedlist::findposition(int pos) const
{
	return nullptr;
}

void Doublelinkedlist::swapnode(int pos1, int pos2) const
{
}

void Doublelinkedlist::print()
{
}
