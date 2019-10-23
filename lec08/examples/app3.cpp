// app3.cpp
#include <iostream>
#include <string>
using namespace std;

class Foo {

public:
  Foo() { name_ = ""; x_= 0; }
  Foo(const std::string& name, const double x) { name_ = name; x_ = x; }
  double value() const { return x_; }
  std::string name() const { return name_; }

  Foo operator=(const Foo& rhs) {
    Foo aFoo(rhs.name_,rhs.x_);
    cout << "Foo operator=: value: " << aFoo.value()
         << ", name: " << aFoo.name() << ", &aFoo: " << &aFoo
         << endl;
    return aFoo;
  }

  Foo operator+=(const Foo& rhs) {
    Foo aFoo(std::string(name_+"+"+rhs.name_), x_ + rhs.x_);
    cout << "Foo operator+=: value: " << aFoo.value()
         << ", name: " << aFoo.name() << ", &aFoo: " << &aFoo
         << endl;
    return aFoo;
  }

  void reset() {
    x_ = 0.;
    name_ = "";
  }

private:
  double x_;
  std::string name_;
};

// global function
ostream&  operator<<(ostream& os, const Foo& foo) {
  os << "Foo name: "  << foo.name() << " value: " << foo.value();
  return os;
}

int main() {
  Foo f1("f1",1.);
  Foo f2("f2",2.);
  Foo f3("f3",3.);

  f1 += f2;
  cout << f1 << ", &f1: " << &f1 << endl;

  f1 = f3;
  cout << f1 << ", &f1: " << &f1 << endl;

  return 0;
}
