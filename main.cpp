//Author: Michael Fu
//date: 12/5
//This is the main class that tests the students and nodes. 

#include <iostream>
#include "Node.h"
#include "Student.h"

using namespace std;



int main(){
  //create the 3 students
  char* name = new char[40];
  strcpy(name, "Michael");
  Student* stud1 = new Student(name);
  strcpy(name, "Nikhaansh");
  Student* stud2 = new Student(name);
  strcpy(name, "Bob");
  Student* stud3 = new Student(name);



  //create a node head of the first student, the print out the name of the student of the head node
  Node* head = new Node(stud1);
  cout << head->getStudent()->getName() << endl;;

  //create a node second, of the second student. Then set the heads next node to second. Then print out the heads, next node's student's name
  Node* second = new Node(stud2);
  head->setNext(second);
  cout << head->getNext()->getStudent()->getName() << endl;

  //create a node third of the third student. set the second node's next node to be third. Then, print out heads next next node's student's name
  Node* third = new Node(stud3);
  second->setNext(third);
  cout << head->getNext()->getNext()->getStudent()->getName() << endl;

  //call all of the destructors

  delete head;
  delete second;
  delete third;
  
}
