#ifndef NODE_H
#define NODE_H
#include "Student.h"
#include <iostream>

using namespace std;

class Node{
 public:

  Student* value;
  Node* next;
  
  Node(Student* newstudent);
  ~Node();
  Student* getStudent();
  void setNext(Node* newNode);
  Node* getNext();
};
#endif
