// example1.cpp
#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

#include "Dummy.h"

int main() {
  Dummy<std::string> d1( "d1" );
  Dummy<std::string> d2( "d2" );
  Dummy<std::string> d3( "d3" );

  Dummy<double> f1( 0.1 );
  Dummy<double> f2( -56.45 );

  cout << "Dummy<std::string>::total(): " << Dummy<std::string>::total() << endl;
  cout << "Dummy<double>::total(): " << Dummy<double>::total() << endl;

  cout << "Dummy<int>::total(): " << Dummy<int>::total() << endl;

  return 0;
}
