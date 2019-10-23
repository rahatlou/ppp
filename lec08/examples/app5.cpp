// app5.cpp
#include <iostream>
using namespace std;
#include "DatumNew.h"

int main() {
  Datum d1( 1.2, 0.3 );
  Datum d3 = 0.5 * d1;
  cout << d3 << endl;

  return 0;
}
