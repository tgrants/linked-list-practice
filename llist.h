#include <iostream>
#include "node.h"

class LList {
  private:
    Node* head;
  public:
    // CONSTRUCTOR
    LList();

    // DESTRUCTOR
    

    // SET
    void setHead(Node* head);
    
    // GET
    Node* getHead() const;
    Node* getLast() const;
    Node* getPrevious(Node*) const;

    // METHODS
    // PRINT
    void print() const;
    // ADD
    void push(int);
    void insert(int, int);
    void append(int);
};