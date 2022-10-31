#include "stack.h"

// CONTRUCTOR
Stack :: Stack () {
	setHead(NULL);
}

// SET
void Stack :: setHead(Node* head) {
	this -> head = head;
}

// GET
Node* Stack :: getHead() const {
	return head;
}

// METHODS
// PRINT
void Stack :: print() const {
	Node* n = head;
	while (n != NULL) {
		std::cout << n -> getValue() << endl;
		n = n -> getNext();
	}
}

// PUSH
void Stack :: push (int value) {
	// Create new node
	Node * n = new Node(value);
	// Point new node to current head
	n -> setNext(head);
	// Set head to new node
	head = n;
}

// POP
void Stack :: pop () {
}