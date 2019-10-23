// app1.cpp
#include <iostream>
#include <string>
using namespace std;

class Foo {

public:

  Foo() { name_ = ""; x_= 0; }
  Foo(const std::string& name, const double x) { name_ = name; x_ = x; }
  double value() const { return x_; }
  std::string name() const { return name_; }

  const Foo& operator=(const Foo& rhs) {
    x_ = rhs.x_;
    name_ = rhs.name_;
    return *this;
  }

  const Foo& operator+=(const Foo& rhs) {
    x_ += rhs.x_;
    name_ = std::string(name_+"+"+rhs.name_);
    return *this;
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

  // in two steps
  f1 += f2; // you can now use f1
  f1 += f3; // for example reset

  // wrong one step
  (f1 += f2) += f3;

  cout << f1 << endl;

  return 0;
}
