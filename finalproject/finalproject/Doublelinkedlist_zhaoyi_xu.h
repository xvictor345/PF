

#ifndef Doublelinkedlist_zhaoyi_xu
#define Doublelinkedlist_zhaoyi_xu

#include<iostream>
#include<string>
#include"Node_zhaoyi_xu.h"
#include"Stockaccount_zhaoyi_xu.h"

class Stockaccount;
class Doublelinkedlist
{
	friend class Bubblesort;
	friend class Selectionsort;

public:
	Doublelinkedlist();
	~Doublelinkedlist();

	Node *getfirst()const;//get the pointer points to the first node
	Node *getlast()const;//get the point located the last node

	int getsize()const;//get the number of nodes inside the list

	void addnode(Node *node);//add a node at the end of the list
	void deletenode(string name);//delete a node by name
	Node *findnode(string name);//find a node by name
	Node *findposition(int pos)const;//find a node by the position in the list
	void swapnode(int pos1, int pos2) const;//swap two nodes which are in position1 and position 2
	void print();//print out the list

private:
	Node *first;// the pointer points to the first node
	Node *last;//the point located the last node
	int numofnodes;//the number of nodes in the list
};



#endif