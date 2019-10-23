// example2.cpp
#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

#include "Dummy.h"


class Student : Dummy<std::string> {
 public:
   Person(const string& name, int id)
    : Dummy<string>(name) {
      id_ = id


int main() {

  return 0;
}
