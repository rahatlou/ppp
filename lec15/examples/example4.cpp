// example4.cpp
#include <iostream>
#include <stdexcept>
using std::cin;
using std::cout;
using std::endl;
using std::runtime_error;

class MyError : public std::runtime_error {
  public:
    MyError() : std::runtime_error("dividing by zero") {}
};

double ratio(int i1, int i2) {
  if(i2 == 0) throw MyError();
  return i1/i2;
}

int main() {
  int i1 = 0;
  int i2 = 0;

  cout << "enter two numbers (ctrl-Z to end): ";
  while( cin >> i1 >> i2 ) {

    try {
      cout << "ratio: " << ratio(i1,i2) << endl;

    } catch(MyError& ex) {
       cout << "error occured..." << ex.what() << endl;
    }

    cout << "enter two numbers (ctrl-Z to end): ";
  }
  return 0;
}
