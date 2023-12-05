#include <iostream>
#include <cstring>
#include "Node.h"
#include "Student.h"

using namespace std;

Node::Node(Student* newStudent){
  value = newStudent;
  next = NULL;
}

Node::~Node(){
  delete value;
  next=NULL;
}

Student* Node::getStudent(){
  return value;
}

void Node::setNext(Node* newNode){
  next = newNode;
}

Node* Node::getNext(){
  return next;
}
