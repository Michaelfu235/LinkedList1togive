#include <iostream>
#include <cstring>
#include "Student.h"

using namespace std;

Student::Student(char* newname){
  name = new char[40];
  strcpy(name, newname);
}

char* Student::getName(){
  return name;
}
