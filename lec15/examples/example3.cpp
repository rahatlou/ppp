// example3.cpp

#include <iostream>
#include <stdexcept>
using std::cin;
using std::cout;
using std::endl;
using std::runtime_error;

double ratio(int i1, int i2) {
  if(i2 == 0) throw std::runtime_error("error in ratio");
  return i1/i2;
}


int main() {
  int i1 = 0;
  int i2 = 0;

  cout << "enter two numbers (ctrl-D to end): ";
  while( cin >> i1 >> i2 ) {

    try {
      cout << "ratio: " << ratio(i1,i2) << endl;

    } catch(std::runtime_error& ex) {
       cout << "error occured..." << ex.what() << endl;
    }
    cout << "enter two numbers (ctrl-D to end): ";
  }
  return 0;
}
