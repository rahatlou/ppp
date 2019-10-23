// example5-bad.cpp
#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

#include "Dummy_bis.h"

int main() {
  Dummy<std::string> d1( std::string("test") );

  double x = 1.23;
  Dummy<double> d2( x );

  d1.print();
  d2.print();

  return 0;
}
