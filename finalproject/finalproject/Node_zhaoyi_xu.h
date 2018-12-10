// Name: Zhaoyi Xu
// Course: 16:332:503, Programming Finance
// 11/16/2018 15:52

#ifndef Node_zhaoyi_xu
#define Node_zhaoyi_xu
#include<string>
#include<iostream>

using namespace std;

class Node {
	friend class Doublelinkedlist;
	friend class Bubblesort;
	friend class Selectionsort;
public:
	Node(string name,int number):itemName(name), itemNo(number),itemPrice(0.0)//constructor
	{
		this->next = NULL;
		this->pre = NULL;
	}

	void setNo(int num) //set the number of shares of stock
	{
		itemNo = num;
	}

	int getNo()//get the number of shares of stock
	{
		return itemNo;
	}

	string getName()//get the name of the stock
	{
		return itemName;
	}

	double getPrice()//get the unit price of the stock
	{
		return itemPrice;
	}

	Node *getnext()//get the next node
	{
		return next;
	}

private:
	string itemName;
	int itemNo;
	double itemPrice;
	Node *next;
	Node *pre;

	};

#endif Node_zhaoyi_xu