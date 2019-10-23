#ifndef Calculator_h
#define Calculator_h

#include <vector>
#include "Datum.h"
#include "Result.h"

class Calculator {
 public:
  Calculator();
  void setData(std::vector<Datum>& data);

  Result weightedAverage();
  Result arithmeticAverage();
  Result geometricAverage();
  Result fancyAverage();

private:
  std::vector<Datum> data_;
};
#endif
