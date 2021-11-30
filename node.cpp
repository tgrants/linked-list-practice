#include <iostream>
#include "node.h"

// CONSTRUCTOR
Node :: Node (int value) {
  setValue(value);
}

// SET
void Node :: setValue(int value) {
	this -> value = value;
}
void Node :: setNext(Node * next) {
  this -> next = next;
}

// GET
int Node :: getValue() const {
	return value;
}
Node* Node :: getNext() const {
  return next;
}
