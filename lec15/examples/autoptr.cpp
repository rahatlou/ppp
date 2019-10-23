// autoptr.cpp

#include <iostream>
#include <string>
using namespace std;

int main() {

  auto_ptr<string> p1( new string("name") );

  string s1 = *p1;

  cout << "p1: " << &p1 << "\t*p1: " << *p1
       << "\t&s1: " << &s1 << "\ts1: " << s1
       << endl;


  auto_ptr<string> p2;
  p2 = p1;

  if( p1.get() == 0 ) {
     cout << "p1 passed ownership to p2" << endl;
  }

  cout << "p1.get(): " << p1.get()
       << "\tp2.get(): " << p2.get()
       << endl;

  cout << *p2 << endl;
  cout << *p1 << endl;

  return 0;
}
