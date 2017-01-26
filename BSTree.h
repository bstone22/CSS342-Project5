//Project 5: Jolly Banker
//Author: Brent Stone
//CSS 342
#pragma once
#include "Account.h"

class BSTree
{
public:
	BSTree();
	~BSTree();

	bool Insert(Account *insert);
	bool Retrieve(const int &accountNumber, Account *&acc) const;
	void Display() const;

	void Empty();
	bool isEmpty() const;


private:
	struct Node
	{
		Node* left = NULL;
		Node* right = NULL;
		Account *pAcct;
	};
	Node* root = NULL;
	bool RecursiveInsert(Node* cur, Account *insert);
	void recursivePrint(Node *printNode) const;
};

