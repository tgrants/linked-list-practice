#include <iostream>
#include "llist.h"
//using namespace std;

int main() {
  // Test
  LList list;
  
  list.push(1);
  list.push(2);
  list.push(3);

  list.append(4);
  list.append(5);
  list.append(6);

  list.insert(7, 2);
  list.insert(8, 4);
  list.insert(9, 8);

  list.print();

  // Wait until enter pressed
  cin.get();
}