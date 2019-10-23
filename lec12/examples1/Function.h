#ifndef Function_h
#define Function_h

#include <string>

class Function {
  public:
    Function(const std::string& name);
    virtual double value(double x) const = 0;
    virtual double integrate(double x1, double x2) const = 0;

  private:
    std::string name_;
};
#endif
