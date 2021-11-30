#include <iostream>
#include "llist.h"

//CONSTRUCTOR
LList :: LList () {
  setHead(NULL);
}

// SET
void LList :: setHead(Node* head) {
  this -> head = head;
}

// GET
Node* LList :: getHead() const {
  return head;
}
// GET LAST - find last element in list
Node* LList :: getLast() const {
  return getPrevious(NULL);
}
// GET PREVIOUS - find last element before n
Node* LList :: getPrevious(Node* s) const {
  // Set current node to head
  Node* n = head;
  // Get next node while next node not s
  while(n -> getNext() != s) {
    n = n -> getNext();
  }
  return n;
}

// METHODS

// PRINT - prints list
void LList :: print() const {
  Node* n = head;
  while (n != NULL) {
    std::cout << n -> getValue() << endl;
    n = n -> getNext();
  }
}
// PUSH - add node to the front
void LList :: push (int value) {
  // Create new node
  Node * n = new Node(value);
  // Point new node to current head
  n -> setNext(head);
  // Set head to new node
  head = n;
}
// INSERT - insert node at index
void LList :: insert(int value, int index) {
  // Create a new node
  Node* n = new Node(value);
  // Set current node to head
  Node* c = head;
  // If list is empty and index = 0, set head to value
  if(head -> getNext() == NULL && index == 0) {
    head = new Node(value);
  }
  // Loop trough nodes 
  int i = 0;
  while (i < index) {
    // Check if 
    if(c == NULL) {
      // TODO: throw exception
      std::cout << "Index is outside of bounds " << index << endl;
      return;
    }
    // Check if next iteration = index
    if(i == index - 1) {
      // Point n to next node
      n -> setNext(c -> getNext());
      // Point current node to n
      c -> setNext(n);
      return;
    }
    // Set current node to next node
    c = c -> getNext();
    // Increment i by 1
    i++;
  }
}
// APPEND - add node to the end
void LList :: append(int value) {
  // Create new node
  Node * n = new Node(value);
  // if list is empty, set head to n
  if (head == NULL) {
    head = n;
    return;
  }
  // Point last node to new node
  getLast() -> setNext(n);
}