// example1.cpp
#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

template< typename  T >
void printObject(const T& input) {
  cout << "printObject(const T& input): with T = " << typeid( T ).name() << endl;
  cout << input << endl;
}

int main() {

  int i = 456;
  double x = 1.234;
  float  y = -0.23;
  string name("jane");

  printObject( i );
  printObject( x );
  printObject( y );
  printObject( name );

  return 0;
}
