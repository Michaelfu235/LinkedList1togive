#include <iostream>
#include "Node.h"
#include "Student.h"

using namespace std;



int main(){

  char* name = new char[40];
  strcpy(name, "Michael");
  Student* stud1 = new Student(name);
  strcpy(name, "Nikhaansh");
  Student* stud2 = new Student(name);
  strcpy(name, "Bob");
  Student* stud3 = new Student(name);


  
  Node* head = new Node(stud1);
  cout << head->getStudent()->getName() << endl;;

  Node* second = new Node(stud2);
  head->setNext(second);
  cout << head->getNext()->getStudent()->getName() << endl;

  Node* third = new Node(stud3);
  second->setNext(third);
  cout << head->getNext()->getNext()->getStudent()->getName() << endl;


  delete head;
  delete second;
  delete third;
  /*
  for(int i = 0;i<count;i++){
    temp = temp->getNext();
    cout << temp->getStudent()->getName();
  }
  
  
  Node* start = NULL;
  start = new Node(Stud1);
  cout << start->getStudent()->getName() << endl;

  start->setNext(new Node(Stud2));
  cout << start->getNext()->getStudent()->getName() << endl;

  start->getNext()->setNext(new Node(Stud3));

  cout << start->getNext()->getNext()->getStudent()->getName() << endl;
  

  
  
  


  while(start->getNext()!=NULL){
    start = start->getNext();
    cout << start->getStudent()->getName() << endl;
  }*/
  
  
  
}

/*

void add(char* nme, Node* &temp, int &count){
  char* nmee = new char[20];
  
  strcpy(nmee, nme);
  if(temp == NULL){
    Node* tempt = new Node(new Student(nmee));
    temp->setNext(tempt);
  } else {
    while(temp->getNext() != NULL){
      temp = temp->getNext();
      
    }
    Node* tempt = new Node(new Student(nmee));
    temp->setNext(tempt);
    
  }
  count++;

  
}

*/
