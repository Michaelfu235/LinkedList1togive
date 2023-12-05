#include <iostream>
#include <cstring>
#include "Node.h"
#include "Student.h"

using namespace std;

//constructor
Node::Node(Student* newStudent){
  value = newStudent;
  next = NULL;
}

//destructor
Node::~Node(){
  delete value;
  next=NULL;
}

//return the student
Student* Node::getStudent(){
  return value;
}

//set the next value
void Node::setNext(Node* newNode){
  next = newNode;
}

//return the next node
Node* Node::getNext(){
  return next;
}
