// example3.cpp
#include <string>
#include <iostream>
using namespace std;

#include "Person.h"
#include "Student.h"
#include "GraduateStudent.h"

int main() {

  Person john("John");
  Student susan("Susan", 123456);
  GraduateStudent paolo("Paolo", 9856, "Physics");

  john.print();
  susan.print();
  paolo.print();

  return 0;
}



