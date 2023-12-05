#include <iostream>
#include <cstring>
#include "Student.h"

using namespace std;

//constructor
Student::Student(char* newname){
  name = new char[40];
  strcpy(name, newname);
}

//return the name of the student
char* Student::getName(){
  return name;
}
