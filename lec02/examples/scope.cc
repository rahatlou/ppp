// scope.cc
#include <iostream>


double f1() {
  double y = 2;
  return y;
}

int main() {

   double x = 3;
   double z = f1();

   std::cout << "x: " << x << ", z: " << z << ", y: " << y
             << std::endl;
   return 0;
}
