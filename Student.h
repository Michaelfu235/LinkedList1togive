#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

using namespace std;

class Student{
 public:
  //constructor
  Student(char* newname);
  //functions
  char* name;
  char* getName();
};
#endif
