// app11.cpp
#include <iostream>
using namespace std;
#include "Datum.h"

int main() {
  Datum d1( 1.2, 0.3 );
  Datum d2( 3.1, 0.4 );

  d1 += d2;
  d1.print();

  return 0;
}
