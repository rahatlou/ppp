// app2.cpp
#include <iostream>
using namespace std;

#include "Vector4.h"

int main() {
  Vector v1;
  cout << "v1.size: " << v1.size() << endl;

  Vector v2(3475);
  cout << "v2.size: " << v2.size() << endl;

  return 0;
}
