// app8.cpp
#include <iostream>
using namespace std;
#include "Vector5.h"

int main() {

  Vector v1(57);
  cout << "v1[47]: " << v1[47] << endl;

  Vector v2(3);
  for(int i=0; i<3;++i) {
    v2[i] = i;
  }

  v1 = v2;

  cout << "v1[2]: " << v1[2] << endl;
  cout << "v1[47]: " << v1[47] << endl;

  return 0;
}
