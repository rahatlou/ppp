// app9.cpp
#include <iostream>
using namespace std;
#include "Vector5.h"

int main() {

  Vector v1(3);
  for(int i=0; i<3;++i) {
    v1[i] = i;
  }

  v1 = v1;

  return 0;
}
