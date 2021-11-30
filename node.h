#ifndef NODE_H
#define NODE_H

#include <iostream>
using namespace std;

class Node {
  private:
    Node* next;
    int value;
  public:
    // CONSTRUCTOR
    Node(int);

    // SET
    void setValue(int);
    void setNext(Node*);
    
    // GET
    int getValue() const;
    Node* getNext() const;
};

#endif