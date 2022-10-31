#include "node.h"

#ifndef STACK_H
#define STACK_H

class Stack {
	private:
		Node* head;
	public:
		// CONSTRUCTOR
		Stack();
	
		// SET
		void setHead(Node* head);
		
		// GET
		Node* getHead() const;
	
		// METHODS
		// PRINT
		void print() const;
		// ADD
		void push(int);
		void pop();
};

#endif