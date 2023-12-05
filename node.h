#ifndef NODE_H
#define NODE_H
#include "Student.h"
#include <iostream>

using namespace std;

class Node{
 public:

  //a student value and a node for the next node
  Student* value;
  Node* next;

  //constructor
  Node(Student* newstudent);
  //destructor
  ~Node();
  //functions
  Student* getStudent();
  void setNext(Node* newNode);
  Node* getNext();
};
#endif
